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
static const char *ng0 = "D:/Xilinx/project/EXP4_Regs/top.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {15U, 0U};
static unsigned int ng7[] = {3504U, 0U};
static unsigned int ng8[] = {3982209U, 0U};
static unsigned int ng9[] = {4294967295U, 0U};



static void Always_38_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB9:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(71, ng0);

LAB43:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);

LAB44:    t2 = ((char*)((ng2)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t26 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t26 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t26 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t26 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t17 = (t0 + 2728);
    xsi_vlogvar_assign_value(t17, t2, 0, 0, 32);

LAB55:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    t17 = (t0 + 1688U);
    t18 = *((char **)t17);
    t17 = (t18 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(58, ng0);

LAB30:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);

LAB31:    t2 = ((char*)((ng2)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t26 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t26 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t26 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t26 == 1)
        goto LAB38;

LAB39:
LAB41:
LAB40:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);

LAB42:
LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(47, ng0);

LAB17:    xsi_set_current_line(48, ng0);
    t24 = (t0 + 1048U);
    t25 = *((char **)t24);
    t24 = (t0 + 2888);
    xsi_vlogvar_assign_value(t24, t25, 0, 0, 5);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);

LAB18:    t2 = ((char*)((ng2)));
    t26 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t26 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t26 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t26 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t26 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);

LAB29:    goto LAB16;

LAB19:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t17 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t18 = (t0 + 2568);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 8);
    goto LAB29;

LAB21:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t17 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 8);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 8);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t18 = (t0 + 2568);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 8);
    goto LAB29;

LAB23:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t17 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 16);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 16);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t18 = (t0 + 2568);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 8);
    goto LAB29;

LAB25:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t17 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 24);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 24);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t18 = (t0 + 2568);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 8);
    goto LAB29;

LAB32:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 2168U);
    t17 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t18 = (t17 + 4);
    t7 = *((unsigned int *)t17);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t18);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 255U);
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 8);
    goto LAB42;

LAB34:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 2168U);
    t17 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t18 = (t17 + 4);
    t7 = *((unsigned int *)t17);
    t8 = (t7 >> 8);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t18);
    t10 = (t9 >> 8);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 255U);
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 8);
    goto LAB42;

LAB36:    xsi_set_current_line(63, ng0);
    t5 = (t0 + 2168U);
    t17 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t18 = (t17 + 4);
    t7 = *((unsigned int *)t17);
    t8 = (t7 >> 16);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t18);
    t10 = (t9 >> 16);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 255U);
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 8);
    goto LAB42;

LAB38:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 2168U);
    t17 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t18 = (t17 + 4);
    t7 = *((unsigned int *)t17);
    t8 = (t7 >> 24);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t18);
    t10 = (t9 >> 24);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 255U);
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 8);
    goto LAB42;

LAB45:    xsi_set_current_line(73, ng0);
    t17 = ((char*)((ng6)));
    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    goto LAB55;

LAB47:    xsi_set_current_line(74, ng0);
    t17 = ((char*)((ng7)));
    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    goto LAB55;

LAB49:    xsi_set_current_line(75, ng0);
    t17 = ((char*)((ng8)));
    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    goto LAB55;

LAB51:    xsi_set_current_line(76, ng0);
    t17 = ((char*)((ng9)));
    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 32);
    goto LAB55;

}


extern void work_m_00000000002434821859_3823007873_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000002434821859_3823007873", "isim/top_1_isim_beh.exe.sim/work/m_00000000002434821859_3823007873.didat");
	xsi_register_executes(pe);
}
