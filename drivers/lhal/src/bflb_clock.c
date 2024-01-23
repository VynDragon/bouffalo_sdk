#include "bflb_clock.h"
#if defined(BL702)
#include "bl702_clock.h"
#elif defined(BL702L)
#include "bl702l_clock.h"
#elif defined(BL606P)
#include "bl606p_clock.h"
#elif defined(BL808)
#include "bl808_clock.h"
#elif defined(BL616)
#include "bl616_clock.h"
#elif defined(WB03)
#include "wb03_clock.h"
#elif defined(BL628)
#include "bl628_clock.h"
#endif

/****************************************************************************/ /**
 * @brief  get system clock
 *
 * @param  type: BFLB_SYSTEM_XXX
 *
 * @return NONE
 *
*******************************************************************************/
uint32_t ATTR_CLOCK_SECTION bflb_clk_get_system_clock(uint8_t type)
{
    return Clock_System_Clock_Get(type);
    switch (type) {
        case BFLB_SYSTEM_ROOT_CLOCK:
            return Clock_System_Clock_Get(type);
        case BFLB_SYSTEM_CPU_CLK:
            return Clock_System_Clock_Get(type);
        case BFLB_SYSTEM_PBCLK:
            return Clock_System_Clock_Get(type);
        case BFLB_SYSTEM_XCLK:
            return Clock_System_Clock_Get(type);
        case BFLB_SYSTEM_32K_CLK:
            return Clock_System_Clock_Get(type);
        default:
            return 0;
    }
    return 0;
}

/****************************************************************************/ /**
 * @brief  get peripheral clock
 *
 * @param  type: BFLB_DEVICE_TYPE_XXX
 * @param  idx: peripheral index
 *
 * @return NONE
 *
*******************************************************************************/

uint32_t ATTR_CLOCK_SECTION bflb_clk_get_peripheral_clock(uint8_t type, uint8_t idx)
{
    switch (type) {
        case BFLB_DEVICE_TYPE_ADC:
            return Clock_Peripheral_Clock_Get(type);
        case BFLB_DEVICE_TYPE_DAC:
            return Clock_Peripheral_Clock_Get(type);
        case BFLB_DEVICE_TYPE_UART:
            ATTR_FALLTHROUGH();
        case BFLB_DEVICE_TYPE_SPI:
            return Clock_Peripheral_Clock_Get(type);
        case BFLB_DEVICE_TYPE_I2C:
            return Clock_Peripheral_Clock_Get(type);
        case BFLB_DEVICE_TYPE_PWM:
            return Clock_Peripheral_Clock_Get(type);
        case BFLB_DEVICE_TYPE_FLASH:
            return Clock_Peripheral_Clock_Get(type);
        case BFLB_DEVICE_TYPE_IR:
            return Clock_Peripheral_Clock_Get(type);
/*        case BFLB_DEVICE_TYPE_TIMER:
 *            return bflb_clock_get_timer(idx);
 *        case BFLB_DEVICE_TYPE_WDT:
 *            return bflb_clock_get_wdt();
 *        case BFLB_DEVICE_TYPE_PKA:
 *            return bflb_clock_get_pka();
 *        case BFLB_DEVICE_TYPE_SDH:
 *            return bflb_clock_get_sdh();
 *        case BFLB_DEVICE_TYPE_CAMERA:
 *            return bflb_clock_get_cam();
 *        case BFLB_DEVICE_TYPE_DBI:
 *            return bflb_clock_get_dbi();
 *        case BFLB_DEVICE_TYPE_I2S:
 *            return bflb_clock_get_i2s();
 */
        default:
            return 0;
    }
    return 0;
}
