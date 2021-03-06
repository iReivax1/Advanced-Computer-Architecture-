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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001234773414_3832581141_init();
    work_m_00000000000811425470_2381739659_init();
    work_m_00000000003944526379_3037777339_init();
    work_m_00000000002320704264_1621107508_init();
    work_m_00000000000596899326_2067619323_init();
    work_m_00000000000667100592_2725559894_init();
    work_m_00000000000079571524_2684609642_init();
    work_m_00000000000465231889_3213298780_init();
    work_m_00000000001645307359_3797123641_init();
    work_m_00000000001217037355_2544694838_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001217037355_2544694838");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
