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
static const char *ng0 = "D:/Xilinx/project/EXP8/CPU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {32U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {34U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {36U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {38U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {39U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {43U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static int ng17[] = {1, 0};
static int ng18[] = {2, 0};
static int ng19[] = {3, 0};



static void Always_37_0(char *t0)
{
    char t12[8];
    char t23[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    int t47;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(71, ng0);

LAB40:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 4256);
    xsi_process_wait(t11, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(43, ng0);
    t13 = (t0 + 1848U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 26);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 26);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 63U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 63U);
    t22 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t24 = (t12 + 4);
    t25 = (t22 + 4);
    t26 = *((unsigned int *)t12);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB14;

LAB11:    if (t35 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t23) = 1;

LAB14:    t39 = (t23 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(62, ng0);

LAB39:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB17:    goto LAB8;

LAB13:    t38 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(44, ng0);

LAB18:    xsi_set_current_line(45, ng0);
    t45 = ((char*)((ng1)));
    t46 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t46, t45, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 21);
    *((unsigned int *)t12) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 21);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t10 & 31U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 31U);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 5, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t12) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t10 & 31U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 31U);
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 5, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 11);
    *((unsigned int *)t12) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 11);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t10 & 31U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 31U);
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 5, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t12) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t10 & 63U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 63U);

LAB19:    t5 = ((char*)((ng2)));
    t47 = xsi_vlog_unsigned_case_compare(t12, 6, t5, 6);
    if (t47 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t47 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t47 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t47 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t47 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t47 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t47 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng10)));
    t47 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t47 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng12)));
    t47 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t47 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng14)));
    t47 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t47 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng3)));
    t47 = xsi_vlog_unsigned_case_compare(t12, 6, t2, 6);
    if (t47 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB38:    goto LAB17;

LAB20:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng3)));
    t13 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 3, 0LL);
    goto LAB38;

LAB22:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB38;

LAB24:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB38;

LAB26:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB38;

LAB28:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB38;

LAB30:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB38;

LAB32:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB38;

LAB34:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB38;

}

static void Always_77_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(79, ng0);
    t8 = (t0 + 2328U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = (t0 + 2728);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 8);
    goto LAB16;

LAB8:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 8);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB16;

LAB10:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 16);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB16;

LAB12:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 24);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 24);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB16;

}


extern void work_m_00000000003468965720_3508565487_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_77_1};
	xsi_register_didat("work_m_00000000003468965720_3508565487", "isim/test_isim_beh.exe.sim/work/m_00000000003468965720_3508565487.didat");
	xsi_register_executes(pe);
}
