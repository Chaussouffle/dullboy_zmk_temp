#pragma once

/* =========================
 * Layer indices — single source of truth
 *
 * Inclure ce fichier AVANT combos.dtsi et dullboy_behaviors.dtsi
 * pour que les noms (BASE, NAV, ...) soient utilisables partout,
 * y compris dans les combos (qui devaient sinon utiliser des
 * nombres bruts car inclus avant les anciens #define du keymap).
 * ========================= */

#define BASE          0
#define NAV           1
#define NAV_PRIME     2
#define ACC           3
#define MAJACC        4
#define CAR           5
#define FL            6
#define MS            7
#define SCROLL_ACCEL  8
#define MS_PRIME      9
