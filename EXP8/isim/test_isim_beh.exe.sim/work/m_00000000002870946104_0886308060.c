/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xilinx/project/EXP8/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Always_29_0(char *t0)
{
    char t10[8];
    char t42[8];
    char t47[16];
    char t48[16];
    char t49[16];
    char t50[8];
    char t52[8];
    char t55[8];
    char t69[8];
    char t90[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(40, ng0);

LAB71:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB26:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB27;

LAB28:
LAB29:    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB9:    xsi_set_current_line(33, ng0);

LAB30:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB31;

LAB32:
LAB33:    t23 = (t0 + 1768);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB11:    xsi_set_current_line(34, ng0);

LAB34:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB35;

LAB36:
LAB37:    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB13:    xsi_set_current_line(35, ng0);

LAB38:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t42) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t42 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB39;

LAB40:
LAB41:    memset(t10, 0, 8);
    t23 = (t10 + 4);
    t24 = (t42 + 4);
    t37 = *((unsigned int *)t42);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB43;

LAB42:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & 4294967295U);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB15:    xsi_set_current_line(36, ng0);

LAB44:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    xsi_vlog_unsigned_add(t47, 33, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t47, 0, 0, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t47, 32, 0, 1);
    goto LAB25;

LAB17:    xsi_set_current_line(37, ng0);

LAB45:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    xsi_vlogtype_concat(t47, 33, 33, 2U, t3, 1, t4, 32);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t48, 33, 33, 2U, t7, 1, t8, 32);
    xsi_vlog_unsigned_minus(t49, 33, t47, 33, t48, 33);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t49, 0, 0, 32);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t49, 32, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    memset(t42, 0, 8);
    t7 = (t42 + 4);
    t9 = (t8 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t42) = t21;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t42);
    t29 = (t27 ^ t28);
    *((unsigned int *)t50) = t29;
    t14 = (t10 + 4);
    t15 = (t42 + 4);
    t23 = (t50 + 4);
    t30 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t15);
    t32 = (t30 | t31);
    *((unsigned int *)t23) = t32;
    t35 = *((unsigned int *)t23);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB46;

LAB47:
LAB48:    t24 = (t0 + 1768);
    t41 = (t24 + 56U);
    t51 = *((char **)t41);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t54 = (t51 + 4);
    t39 = *((unsigned int *)t51);
    t40 = (t39 >> 31);
    t43 = (t40 & 1);
    *((unsigned int *)t52) = t43;
    t44 = *((unsigned int *)t54);
    t45 = (t44 >> 31);
    t46 = (t45 & 1);
    *((unsigned int *)t53) = t46;
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t52);
    t58 = (t56 ^ t57);
    *((unsigned int *)t55) = t58;
    t59 = (t50 + 4);
    t60 = (t52 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB49;

LAB50:
LAB51:    t70 = (t0 + 2248);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t69, 0, 8);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t73) == 0)
        goto LAB52;

LAB54:    t79 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t79) = 1;

LAB55:    t80 = (t69 + 4);
    t81 = (t72 + 4);
    t82 = *((unsigned int *)t72);
    t83 = (~(t82));
    *((unsigned int *)t69) = t83;
    *((unsigned int *)t80) = 0;
    if (*((unsigned int *)t81) != 0)
        goto LAB57;

LAB56:    t88 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t88 & 1U);
    t89 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t89 & 1U);
    t91 = *((unsigned int *)t55);
    t92 = *((unsigned int *)t69);
    t93 = (t91 ^ t92);
    *((unsigned int *)t90) = t93;
    t94 = (t55 + 4);
    t95 = (t69 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB58;

LAB59:
LAB60:    t104 = (t0 + 1928);
    xsi_vlogvar_assign_value(t104, t90, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(38, ng0);

LAB61:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB63;

LAB62:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB64;

LAB65:    t14 = (t10 + 4);
    t11 = *((unsigned int *)t14);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB69:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB21:    xsi_set_current_line(39, ng0);

LAB70:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB27:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB29;

LAB31:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB33;

LAB35:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB37;

LAB39:    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t42) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB41;

LAB43:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t24);
    *((unsigned int *)t10) = (t39 | t40);
    t43 = *((unsigned int *)t23);
    t44 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t43 | t44);
    goto LAB42;

LAB46:    t37 = *((unsigned int *)t50);
    t38 = *((unsigned int *)t23);
    *((unsigned int *)t50) = (t37 | t38);
    goto LAB48;

LAB49:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    goto LAB51;

LAB52:    *((unsigned int *)t69) = 1;
    goto LAB55;

LAB57:    t84 = *((unsigned int *)t69);
    t85 = *((unsigned int *)t81);
    *((unsigned int *)t69) = (t84 | t85);
    t86 = *((unsigned int *)t80);
    t87 = *((unsigned int *)t81);
    *((unsigned int *)t80) = (t86 | t87);
    goto LAB56;

LAB58:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    goto LAB60;

LAB63:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t10) = 1;
    goto LAB65;

LAB67:    xsi_set_current_line(38, ng0);
    t15 = ((char*)((ng2)));
    t23 = (t0 + 1768);
    xsi_vlogvar_assign_value(t23, t15, 0, 0, 32);
    goto LAB69;

}

static void Always_46_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2088);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB12;

}


extern void work_m_00000000002870946104_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Always_46_1};
	xsi_register_didat("work_m_00000000002870946104_0886308060", "isim/test_isim_beh.exe.sim/work/m_00000000002870946104_0886308060.didat");
	xsi_register_executes(pe);
}
