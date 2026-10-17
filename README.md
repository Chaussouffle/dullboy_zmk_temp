# Dullboy ZMK: host keyboard layouts

This repository has one firmware keymap with QWERTY, Colemak, Workman, Dvorak,
and Ergol base arrangements. The host keyboard layout is selected independently
by one include in `config/layout.h`:

```c
#include "host/ch.h"       // Swiss French (the original layout.h)
```

Replace that one line with one of the following includes, then rebuild and
flash the firmware. The computer must be configured for the same layout.

| Include | Computer layout | Accent input |
| --- | --- | --- |
| `host/ch.h` | Swiss French (original) | Original Swiss dead keys and direct keys |
| `host/us.h` | US English, standard | Windows Alt numeric macros |
| `host/fr_fr.h` | French, France | Windows Alt numeric macros |
| `host/de_de.h` | German, Germany | Windows Alt numeric macros |
| `host/ch_de.h` | German, Switzerland | Windows Alt numeric macros |
| `host/en_gb.h` | English, United Kingdom | Windows Alt numeric macros |

These names identify *computer layouts*. ISO and ANSI identify key geometries
and are not interchangeable with the computer's language setting. The other
profiles assume Windows. The Swiss French profile preserves the original
`config/layout.h` mappings in `config/host/ch.h`.

## Key names and coverage

In the keymap, `&kp Y` means “type y”; `&kp AT` means “type @”; `&kp N1`
means “type 1”. The selected host profile first `#undef`s each ZMK name it
reuses and then `#define`s the corresponding host keycode from an independent
HID value. This also covers `&kp LC(A)` and the tap arguments of hold-taps.

ZMK keycodes which are not characters (navigation, modifiers, media, keypad
keys used by Alt codes, Bluetooth, mouse) retain their ZMK meanings. If you
need a physical HID position for a game, use an explicit `PHY_*` value from
`config/host/physical.h` rather than a localized letter name.

`config/host/overrides/*.h` lists all translated letters, digits, and common
punctuation. `config/host/ch.h` retains the project's additional `CH_*`
definitions, frozen to raw physical codes so the later ZMK overrides do not
change their meaning. `config/host/vendor/*.h` contains generated ZMK locale
data from [ZMK Locales](https://github.com/joelspadin/zmk-locales), under its
original Unicode copyright notice in each file. The Swiss mapping in `ch.h`
is authoritative where it differs from that generated data.

## Characters missing from a computer layout

The ACC and MajAcc layers keep the same key positions and behavior names.
For the Swiss French host, accent behaviors retain their original key and
dead-key sequences. On the other listed Windows hosts, the text backend in
`config/host/text_windows.dtsi` sends CP1252 characters with numeric keypad
Alt sequences; this also covers `é`, `ç`, `œ` and the other accents that are
absent from a standard US layout. Numeric Alt input requires Windows and an
application that accepts it; check the numeric keypad/Num Lock behavior on
your host. Existing extra-symbol macros also use Windows Alt codes.

The five standalone accent keys on ACC/MajAcc need an explicit limitation:
on Swiss French they remain dead keys and can compose with the next letter.
On the other supplied Windows profiles they emit a visible standalone accent
(`~`, `´`, `` ` ``, `^`, `¨`). They cannot compose with the next letter using
the Windows Alt fallback. Use the corresponding ACC character behavior for
the already configured accented letters. A macOS/Linux profile needs its own
text input backend; changing only the HID mapping is insufficient.

To extend a profile, add its generated locale header, create an `overrides/`
header defining the same public names with `#undef` followed by `#define`,
and provide a text backend for any character missing as a single host key.
Never define `Y Z` and `Z Y` as mutual aliases: C preprocessing does not swap
them. Each definition must ultimately resolve to an independent HID value.

## Public password placeholders

`config/mdp.dtsi` contains three harmless macros that press `ENTER`. The public
workflow builds and uploads firmware with these placeholders. Do not put real
passwords in this repository or its downloadable firmware. For a personal
build, use a separate private repository or local copy, and replace
`config/mdp.dtsi` there with your own three macro nodes named `mdp1_macro`,
`mdp2_macro`, and `mdp3_macro`. Write letters and punctuation through the
localized names if those sequences should also follow the host layout.

The source archive from which this version was adapted included private
password sequences. None of those sequences is copied into this public ZIP.
If an earlier copy of that archive or a firmware containing the passwords was
published, remove its public access and rotate the affected credentials.

## Build

Push this repository to GitHub: `.github/workflows/build.yml` builds the
selected layout and uploads `dullboy.uf2`. The locale switch is resolved at
firmware build time, so changing the layout on the computer alone will not
change the firmware. The repository's `config/west.yml` follows ZMK `main`;
pin its revision if you need reproducible builds.
