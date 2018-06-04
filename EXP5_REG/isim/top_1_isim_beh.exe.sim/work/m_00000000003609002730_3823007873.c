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
static const char *ng0 = "D:/Xilinx/project/EXP5_REG/top.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {15U, 0U};
static unsigned int ng7[] = {3504U, 0U};
static unsigned int ng8[] = {3982209U, 0U};
static unsigned int ng9[] = {4294967295U, 0U};



static void Always_44_0(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(52, ng0);

LAB13:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB25:    goto LAB12;

LAB15:    xsi_set_current_line(54, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 255U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 255U);
    t22 = (t0 + 2408);
    xsi_vlogvar_assign_value(t22, t14, 0, 0, 8);
    goto LAB25;

LAB17:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 8);
    goto LAB25;

LAB19:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 16);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 8);
    goto LAB25;

LAB21:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 24);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 8);
    goto LAB25;

LAB26:    xsi_set_current_line(62, ng0);

LAB29:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng1)));
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);

LAB30:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB41:    goto LAB28;

LAB31:    xsi_set_current_line(65, ng0);

LAB42:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng6)));
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB41;

LAB33:    xsi_set_current_line(66, ng0);

LAB43:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng7)));
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB41;

LAB35:    xsi_set_current_line(67, ng0);

LAB44:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng8)));
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB41;

LAB37:    xsi_set_current_line(68, ng0);

LAB45:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng9)));
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB41;

}


extern void work_m_00000000003609002730_3823007873_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_00000000003609002730_3823007873", "isim/top_1_isim_beh.exe.sim/work/m_00000000003609002730_3823007873.didat");
	xsi_register_executes(pe);
}
