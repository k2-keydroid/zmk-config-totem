/*
 * keys_jp.h (subset)
 * JIS(日本語106/109)設定のOSに対して、意図した記号を出力するための
 * キーコードエイリアス定義。
 *
 * zmk-locale-generator (https://github.com/joelspadin/zmk-locale-generator)
 * が生成する公式の keys_jp.h と互換の命名。ここでは totem.keymap v6 で
 * 使用するものだけを定義した最小サブセット。
 * 公式のフル版に差し替えてもそのまま動作する。
 *
 * JIS物理配列とHIDキーコードの対応(参考):
 *   MINUS = -ほ / EQUAL = ^~ / INT3 = ¥|
 *   LBKT  = @`  / RBKT  = [{
 *   SEMI  = ;+  / SQT   = :* / NON_US_HASH = ]}
 *   INT1  = \_ (ろ)
 *   GRAVE = 半角/全角 (文字は出ない)
 */

#pragma once

#include <dt-bindings/zmk/keys.h>

/* 無シフトで出る記号 */
#define JP_SEMI  SEMI            /* ; */
#define JP_MINUS MINUS           /* - */
#define JP_COLON SQT             /* : */
#define JP_AT    LBKT            /* @ */
#define JP_CARET EQUAL           /* ^ */
#define JP_LBKT  RBKT            /* [ */
#define JP_RBKT  NON_US_HASH     /* ] */
#define JP_BSLH  INT1            /* \ (ろキー) */
#define JP_YEN   INT3            /* \ (¥キー) */

/* Shift付きで出る記号 */
#define JP_EXCL  LS(N1)          /* ! */
#define JP_DQT   LS(N2)          /* " */
#define JP_HASH  LS(N3)          /* # */
#define JP_DLLR  LS(N4)          /* $ */
#define JP_PRCNT LS(N5)          /* % */
#define JP_AMPS  LS(N6)          /* & */
#define JP_SQT   LS(N7)          /* ' */
#define JP_LPAR  LS(N8)          /* ( */
#define JP_RPAR  LS(N9)          /* ) */
#define JP_ASTRK LS(SQT)         /* * */
#define JP_PLUS  LS(SEMI)        /* + */
#define JP_EQUAL LS(MINUS)       /* = */
#define JP_TILDE LS(EQUAL)       /* ~ */
#define JP_GRAVE LS(LBKT)        /* ` */
#define JP_LBRC  LS(RBKT)        /* { */
#define JP_RBRC  LS(NON_US_HASH) /* } */
#define JP_PIPE  LS(INT3)        /* | */
#define JP_UNDER LS(INT1)        /* _ */
#define JP_LT    LS(COMMA)       /* < */
#define JP_GT    LS(DOT)         /* > */
#define JP_QMARK LS(FSLH)        /* ? */
