/*
 * Autogenerated file
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DT_BINDINGS_PINCTRL_BFLB_BL604X_PINCTRL_H_
#define DT_BINDINGS_PINCTRL_BFLB_BL604X_PINCTRL_H_

#include <dt-bindings/pinctrl/bl60x-pinctrl.h>
#include <dt-bindings/pinctrl/bflb-common-pinctrl.h>

/* gpio0_sdio_clk */
#define GPIO0_SDIO_CLK \
	BFLB_PINMUX(0, sdio, clk, periph)

/* gpio0_flash_d1 */
#define GPIO0_FLASH_D1 \
	BFLB_PINMUX(0, flash, d1, periph)

/* gpio0_spi_miso */
#define GPIO0_SPI_MISO \
	BFLB_PINMUX(0, spi, miso, periph)

/* gpio0_i2c_scl */
#define GPIO0_I2C_SCL \
	BFLB_PINMUX(0, i2c, scl, periph)

/* gpio0_uart0_rts */
#define GPIO0_UART0_RTS \
	BFLB_PINMUX(0, uart0, rts, periph)

/* gpio0_uart0_cts */
#define GPIO0_UART0_CTS \
	BFLB_PINMUX(0, uart0, cts, periph)

/* gpio0_uart0_tx */
#define GPIO0_UART0_TX \
	BFLB_PINMUX(0, uart0, tx, periph)

/* gpio0_uart0_rx */
#define GPIO0_UART0_RX \
	BFLB_PINMUX(0, uart0, rx, periph)

/* gpio0_uart1_rts */
#define GPIO0_UART1_RTS \
	BFLB_PINMUX(0, uart1, rts, periph)

/* gpio0_uart1_cts */
#define GPIO0_UART1_CTS \
	BFLB_PINMUX(0, uart1, cts, periph)

/* gpio0_uart1_tx */
#define GPIO0_UART1_TX \
	BFLB_PINMUX(0, uart1, tx, periph)

/* gpio0_uart1_rx */
#define GPIO0_UART1_RX \
	BFLB_PINMUX(0, uart1, rx, periph)

/* gpio0_pwm_ch0 */
#define GPIO0_PWM_CH0 \
	BFLB_PINMUX(0, pwm, ch0, periph)

/* gpio0_fem_gpio0 */
#define GPIO0_FEM_GPIO0 \
	BFLB_PINMUX(0, fem, gpio0, periph)

/* gpio0_jtag_tms */
#define GPIO0_JTAG_TMS \
	BFLB_PINMUX(0, jtag, tms, periph)

/* gpio0_atest_in */
#define GPIO0_ATEST_IN \
	BFLB_PINMUX(0, atest, in, analog)

/* gpio1_sdio_cmd */
#define GPIO1_SDIO_CMD \
	BFLB_PINMUX(1, sdio, cmd, periph)

/* gpio1_flash_d2 */
#define GPIO1_FLASH_D2 \
	BFLB_PINMUX(1, flash, d2, periph)

/* gpio1_spi_mosi */
#define GPIO1_SPI_MOSI \
	BFLB_PINMUX(1, spi, mosi, periph)

/* gpio1_i2c_sda */
#define GPIO1_I2C_SDA \
	BFLB_PINMUX(1, i2c, sda, periph)

/* gpio1_uart0_rts */
#define GPIO1_UART0_RTS \
	BFLB_PINMUX(1, uart0, rts, periph)

/* gpio1_uart0_cts */
#define GPIO1_UART0_CTS \
	BFLB_PINMUX(1, uart0, cts, periph)

/* gpio1_uart0_tx */
#define GPIO1_UART0_TX \
	BFLB_PINMUX(1, uart0, tx, periph)

/* gpio1_uart0_rx */
#define GPIO1_UART0_RX \
	BFLB_PINMUX(1, uart0, rx, periph)

/* gpio1_uart1_rts */
#define GPIO1_UART1_RTS \
	BFLB_PINMUX(1, uart1, rts, periph)

/* gpio1_uart1_cts */
#define GPIO1_UART1_CTS \
	BFLB_PINMUX(1, uart1, cts, periph)

/* gpio1_uart1_tx */
#define GPIO1_UART1_TX \
	BFLB_PINMUX(1, uart1, tx, periph)

/* gpio1_uart1_rx */
#define GPIO1_UART1_RX \
	BFLB_PINMUX(1, uart1, rx, periph)

/* gpio1_pwm_ch1 */
#define GPIO1_PWM_CH1 \
	BFLB_PINMUX(1, pwm, ch1, periph)

/* gpio1_fem_gpio1 */
#define GPIO1_FEM_GPIO1 \
	BFLB_PINMUX(1, fem, gpio1, periph)

/* gpio1_jtag_tdi */
#define GPIO1_JTAG_TDI \
	BFLB_PINMUX(1, jtag, tdi, periph)

/* gpio1_atest_ip */
#define GPIO1_ATEST_IP \
	BFLB_PINMUX(1, atest, ip, analog)

/* gpio2_sdio_dat0 */
#define GPIO2_SDIO_DAT0 \
	BFLB_PINMUX(2, sdio, dat0, periph)

/* gpio2_flash_d3 */
#define GPIO2_FLASH_D3 \
	BFLB_PINMUX(2, flash, d3, periph)

/* gpio2_spi_ss */
#define GPIO2_SPI_SS \
	BFLB_PINMUX(2, spi, ss, periph)

/* gpio2_i2c_scl */
#define GPIO2_I2C_SCL \
	BFLB_PINMUX(2, i2c, scl, periph)

/* gpio2_uart0_rts */
#define GPIO2_UART0_RTS \
	BFLB_PINMUX(2, uart0, rts, periph)

/* gpio2_uart0_cts */
#define GPIO2_UART0_CTS \
	BFLB_PINMUX(2, uart0, cts, periph)

/* gpio2_uart0_tx */
#define GPIO2_UART0_TX \
	BFLB_PINMUX(2, uart0, tx, periph)

/* gpio2_uart0_rx */
#define GPIO2_UART0_RX \
	BFLB_PINMUX(2, uart0, rx, periph)

/* gpio2_uart1_rts */
#define GPIO2_UART1_RTS \
	BFLB_PINMUX(2, uart1, rts, periph)

/* gpio2_uart1_cts */
#define GPIO2_UART1_CTS \
	BFLB_PINMUX(2, uart1, cts, periph)

/* gpio2_uart1_tx */
#define GPIO2_UART1_TX \
	BFLB_PINMUX(2, uart1, tx, periph)

/* gpio2_uart1_rx */
#define GPIO2_UART1_RX \
	BFLB_PINMUX(2, uart1, rx, periph)

/* gpio2_pwm_ch2 */
#define GPIO2_PWM_CH2 \
	BFLB_PINMUX(2, pwm, ch2, periph)

/* gpio2_fem_gpio2 */
#define GPIO2_FEM_GPIO2 \
	BFLB_PINMUX(2, fem, gpio2, periph)

/* gpio2_jtag_tck */
#define GPIO2_JTAG_TCK \
	BFLB_PINMUX(2, jtag, tck, periph)

/* gpio2_atest_qn */
#define GPIO2_ATEST_QN \
	BFLB_PINMUX(2, atest, qn, analog)

/* gpio3_sdio_dat1 */
#define GPIO3_SDIO_DAT1 \
	BFLB_PINMUX(3, sdio, dat1, periph)

/* gpio3_spi_sclk */
#define GPIO3_SPI_SCLK \
	BFLB_PINMUX(3, spi, sclk, periph)

/* gpio3_i2c_sda */
#define GPIO3_I2C_SDA \
	BFLB_PINMUX(3, i2c, sda, periph)

/* gpio3_uart0_rts */
#define GPIO3_UART0_RTS \
	BFLB_PINMUX(3, uart0, rts, periph)

/* gpio3_uart0_cts */
#define GPIO3_UART0_CTS \
	BFLB_PINMUX(3, uart0, cts, periph)

/* gpio3_uart0_tx */
#define GPIO3_UART0_TX \
	BFLB_PINMUX(3, uart0, tx, periph)

/* gpio3_uart0_rx */
#define GPIO3_UART0_RX \
	BFLB_PINMUX(3, uart0, rx, periph)

/* gpio3_uart1_rts */
#define GPIO3_UART1_RTS \
	BFLB_PINMUX(3, uart1, rts, periph)

/* gpio3_uart1_cts */
#define GPIO3_UART1_CTS \
	BFLB_PINMUX(3, uart1, cts, periph)

/* gpio3_uart1_tx */
#define GPIO3_UART1_TX \
	BFLB_PINMUX(3, uart1, tx, periph)

/* gpio3_uart1_rx */
#define GPIO3_UART1_RX \
	BFLB_PINMUX(3, uart1, rx, periph)

/* gpio3_pwm_ch3 */
#define GPIO3_PWM_CH3 \
	BFLB_PINMUX(3, pwm, ch3, periph)

/* gpio3_fem_gpio3 */
#define GPIO3_FEM_GPIO3 \
	BFLB_PINMUX(3, fem, gpio3, periph)

/* gpio3_jtag_tdo */
#define GPIO3_JTAG_TDO \
	BFLB_PINMUX(3, jtag, tdo, periph)

/* gpio3_atest_qp */
#define GPIO3_ATEST_QP \
	BFLB_PINMUX(3, atest, qp, analog)

/* gpio4_sdio_dat2 */
#define GPIO4_SDIO_DAT2 \
	BFLB_PINMUX(4, sdio, dat2, periph)

/* gpio4_spi_miso */
#define GPIO4_SPI_MISO \
	BFLB_PINMUX(4, spi, miso, periph)

/* gpio4_i2c_scl */
#define GPIO4_I2C_SCL \
	BFLB_PINMUX(4, i2c, scl, periph)

/* gpio4_uart0_rts */
#define GPIO4_UART0_RTS \
	BFLB_PINMUX(4, uart0, rts, periph)

/* gpio4_uart0_cts */
#define GPIO4_UART0_CTS \
	BFLB_PINMUX(4, uart0, cts, periph)

/* gpio4_uart0_tx */
#define GPIO4_UART0_TX \
	BFLB_PINMUX(4, uart0, tx, periph)

/* gpio4_uart0_rx */
#define GPIO4_UART0_RX \
	BFLB_PINMUX(4, uart0, rx, periph)

/* gpio4_uart1_rts */
#define GPIO4_UART1_RTS \
	BFLB_PINMUX(4, uart1, rts, periph)

/* gpio4_uart1_cts */
#define GPIO4_UART1_CTS \
	BFLB_PINMUX(4, uart1, cts, periph)

/* gpio4_uart1_tx */
#define GPIO4_UART1_TX \
	BFLB_PINMUX(4, uart1, tx, periph)

/* gpio4_uart1_rx */
#define GPIO4_UART1_RX \
	BFLB_PINMUX(4, uart1, rx, periph)

/* gpio4_pwm_ch4 */
#define GPIO4_PWM_CH4 \
	BFLB_PINMUX(4, pwm, ch4, periph)

/* gpio4_fem_gpio0 */
#define GPIO4_FEM_GPIO0 \
	BFLB_PINMUX(4, fem, gpio0, periph)

/* gpio4_jtag_tms */
#define GPIO4_JTAG_TMS \
	BFLB_PINMUX(4, jtag, tms, periph)

/* gpio4_adc_ch1 */
#define GPIO4_ADC_CH1 \
	BFLB_PINMUX(4, adc, ch1, analog)

/* gpio5_spi_mosi */
#define GPIO5_SPI_MOSI \
	BFLB_PINMUX(5, spi, mosi, periph)

/* gpio5_i2c_sda */
#define GPIO5_I2C_SDA \
	BFLB_PINMUX(5, i2c, sda, periph)

/* gpio5_uart0_rts */
#define GPIO5_UART0_RTS \
	BFLB_PINMUX(5, uart0, rts, periph)

/* gpio5_uart0_cts */
#define GPIO5_UART0_CTS \
	BFLB_PINMUX(5, uart0, cts, periph)

/* gpio5_uart0_tx */
#define GPIO5_UART0_TX \
	BFLB_PINMUX(5, uart0, tx, periph)

/* gpio5_uart0_rx */
#define GPIO5_UART0_RX \
	BFLB_PINMUX(5, uart0, rx, periph)

/* gpio5_uart1_rts */
#define GPIO5_UART1_RTS \
	BFLB_PINMUX(5, uart1, rts, periph)

/* gpio5_uart1_cts */
#define GPIO5_UART1_CTS \
	BFLB_PINMUX(5, uart1, cts, periph)

/* gpio5_uart1_tx */
#define GPIO5_UART1_TX \
	BFLB_PINMUX(5, uart1, tx, periph)

/* gpio5_uart1_rx */
#define GPIO5_UART1_RX \
	BFLB_PINMUX(5, uart1, rx, periph)

/* gpio5_pwm_ch0 */
#define GPIO5_PWM_CH0 \
	BFLB_PINMUX(5, pwm, ch0, periph)

/* gpio5_fem_gpio1 */
#define GPIO5_FEM_GPIO1 \
	BFLB_PINMUX(5, fem, gpio1, periph)

/* gpio5_jtag_tdi */
#define GPIO5_JTAG_TDI \
	BFLB_PINMUX(5, jtag, tdi, periph)

/* gpio5_adc_ch4 */
#define GPIO5_ADC_CH4 \
	BFLB_PINMUX(5, adc, ch4, analog)

/* gpio6_spi_ss */
#define GPIO6_SPI_SS \
	BFLB_PINMUX(6, spi, ss, periph)

/* gpio6_i2c_scl */
#define GPIO6_I2C_SCL \
	BFLB_PINMUX(6, i2c, scl, periph)

/* gpio6_uart0_rts */
#define GPIO6_UART0_RTS \
	BFLB_PINMUX(6, uart0, rts, periph)

/* gpio6_uart0_cts */
#define GPIO6_UART0_CTS \
	BFLB_PINMUX(6, uart0, cts, periph)

/* gpio6_uart0_tx */
#define GPIO6_UART0_TX \
	BFLB_PINMUX(6, uart0, tx, periph)

/* gpio6_uart0_rx */
#define GPIO6_UART0_RX \
	BFLB_PINMUX(6, uart0, rx, periph)

/* gpio6_uart1_rts */
#define GPIO6_UART1_RTS \
	BFLB_PINMUX(6, uart1, rts, periph)

/* gpio6_uart1_cts */
#define GPIO6_UART1_CTS \
	BFLB_PINMUX(6, uart1, cts, periph)

/* gpio6_uart1_tx */
#define GPIO6_UART1_TX \
	BFLB_PINMUX(6, uart1, tx, periph)

/* gpio6_uart1_rx */
#define GPIO6_UART1_RX \
	BFLB_PINMUX(6, uart1, rx, periph)

/* gpio6_pwm_ch1 */
#define GPIO6_PWM_CH1 \
	BFLB_PINMUX(6, pwm, ch1, periph)

/* gpio6_fem_gpio2 */
#define GPIO6_FEM_GPIO2 \
	BFLB_PINMUX(6, fem, gpio2, periph)

/* gpio6_jtag_tck */
#define GPIO6_JTAG_TCK \
	BFLB_PINMUX(6, jtag, tck, periph)

/* gpio6_adc_ch5 */
#define GPIO6_ADC_CH5 \
	BFLB_PINMUX(6, adc, ch5, analog)

/* gpio7_spi_sclk */
#define GPIO7_SPI_SCLK \
	BFLB_PINMUX(7, spi, sclk, periph)

/* gpio7_i2c_sda */
#define GPIO7_I2C_SDA \
	BFLB_PINMUX(7, i2c, sda, periph)

/* gpio7_uart0_rts */
#define GPIO7_UART0_RTS \
	BFLB_PINMUX(7, uart0, rts, periph)

/* gpio7_uart0_cts */
#define GPIO7_UART0_CTS \
	BFLB_PINMUX(7, uart0, cts, periph)

/* gpio7_uart0_tx */
#define GPIO7_UART0_TX \
	BFLB_PINMUX(7, uart0, tx, periph)

/* gpio7_uart0_rx */
#define GPIO7_UART0_RX \
	BFLB_PINMUX(7, uart0, rx, periph)

/* gpio7_uart1_rts */
#define GPIO7_UART1_RTS \
	BFLB_PINMUX(7, uart1, rts, periph)

/* gpio7_uart1_cts */
#define GPIO7_UART1_CTS \
	BFLB_PINMUX(7, uart1, cts, periph)

/* gpio7_uart1_tx */
#define GPIO7_UART1_TX \
	BFLB_PINMUX(7, uart1, tx, periph)

/* gpio7_uart1_rx */
#define GPIO7_UART1_RX \
	BFLB_PINMUX(7, uart1, rx, periph)

/* gpio7_pwm_ch2 */
#define GPIO7_PWM_CH2 \
	BFLB_PINMUX(7, pwm, ch2, periph)

/* gpio7_fem_gpio3 */
#define GPIO7_FEM_GPIO3 \
	BFLB_PINMUX(7, fem, gpio3, periph)

/* gpio7_jtag_tdo */
#define GPIO7_JTAG_TDO \
	BFLB_PINMUX(7, jtag, tdo, periph)

/* gpio8_spi_miso */
#define GPIO8_SPI_MISO \
	BFLB_PINMUX(8, spi, miso, periph)

/* gpio8_i2c_scl */
#define GPIO8_I2C_SCL \
	BFLB_PINMUX(8, i2c, scl, periph)

/* gpio8_uart0_rts */
#define GPIO8_UART0_RTS \
	BFLB_PINMUX(8, uart0, rts, periph)

/* gpio8_uart0_cts */
#define GPIO8_UART0_CTS \
	BFLB_PINMUX(8, uart0, cts, periph)

/* gpio8_uart0_tx */
#define GPIO8_UART0_TX \
	BFLB_PINMUX(8, uart0, tx, periph)

/* gpio8_uart0_rx */
#define GPIO8_UART0_RX \
	BFLB_PINMUX(8, uart0, rx, periph)

/* gpio8_uart1_rts */
#define GPIO8_UART1_RTS \
	BFLB_PINMUX(8, uart1, rts, periph)

/* gpio8_uart1_cts */
#define GPIO8_UART1_CTS \
	BFLB_PINMUX(8, uart1, cts, periph)

/* gpio8_uart1_tx */
#define GPIO8_UART1_TX \
	BFLB_PINMUX(8, uart1, tx, periph)

/* gpio8_uart1_rx */
#define GPIO8_UART1_RX \
	BFLB_PINMUX(8, uart1, rx, periph)

/* gpio8_pwm_ch3 */
#define GPIO8_PWM_CH3 \
	BFLB_PINMUX(8, pwm, ch3, periph)

/* gpio8_fem_gpio0 */
#define GPIO8_FEM_GPIO0 \
	BFLB_PINMUX(8, fem, gpio0, periph)

/* gpio8_jtag_tms */
#define GPIO8_JTAG_TMS \
	BFLB_PINMUX(8, jtag, tms, periph)

/* gpio9_spi_mosi */
#define GPIO9_SPI_MOSI \
	BFLB_PINMUX(9, spi, mosi, periph)

/* gpio9_i2c_sda */
#define GPIO9_I2C_SDA \
	BFLB_PINMUX(9, i2c, sda, periph)

/* gpio9_uart0_rts */
#define GPIO9_UART0_RTS \
	BFLB_PINMUX(9, uart0, rts, periph)

/* gpio9_uart0_cts */
#define GPIO9_UART0_CTS \
	BFLB_PINMUX(9, uart0, cts, periph)

/* gpio9_uart0_tx */
#define GPIO9_UART0_TX \
	BFLB_PINMUX(9, uart0, tx, periph)

/* gpio9_uart0_rx */
#define GPIO9_UART0_RX \
	BFLB_PINMUX(9, uart0, rx, periph)

/* gpio9_uart1_rts */
#define GPIO9_UART1_RTS \
	BFLB_PINMUX(9, uart1, rts, periph)

/* gpio9_uart1_cts */
#define GPIO9_UART1_CTS \
	BFLB_PINMUX(9, uart1, cts, periph)

/* gpio9_uart1_tx */
#define GPIO9_UART1_TX \
	BFLB_PINMUX(9, uart1, tx, periph)

/* gpio9_uart1_rx */
#define GPIO9_UART1_RX \
	BFLB_PINMUX(9, uart1, rx, periph)

/* gpio9_pwm_ch4 */
#define GPIO9_PWM_CH4 \
	BFLB_PINMUX(9, pwm, ch4, periph)

/* gpio9_fem_gpio1 */
#define GPIO9_FEM_GPIO1 \
	BFLB_PINMUX(9, fem, gpio1, periph)

/* gpio9_jtag_tdi */
#define GPIO9_JTAG_TDI \
	BFLB_PINMUX(9, jtag, tdi, periph)

/* gpio9_adc_ch6 */
#define GPIO9_ADC_CH6 \
	BFLB_PINMUX(9, adc, ch6, analog)

/* gpio10_spi_ss */
#define GPIO10_SPI_SS \
	BFLB_PINMUX(10, spi, ss, periph)

/* gpio10_i2c_scl */
#define GPIO10_I2C_SCL \
	BFLB_PINMUX(10, i2c, scl, periph)

/* gpio10_uart0_rts */
#define GPIO10_UART0_RTS \
	BFLB_PINMUX(10, uart0, rts, periph)

/* gpio10_uart0_cts */
#define GPIO10_UART0_CTS \
	BFLB_PINMUX(10, uart0, cts, periph)

/* gpio10_uart0_tx */
#define GPIO10_UART0_TX \
	BFLB_PINMUX(10, uart0, tx, periph)

/* gpio10_uart0_rx */
#define GPIO10_UART0_RX \
	BFLB_PINMUX(10, uart0, rx, periph)

/* gpio10_uart1_rts */
#define GPIO10_UART1_RTS \
	BFLB_PINMUX(10, uart1, rts, periph)

/* gpio10_uart1_cts */
#define GPIO10_UART1_CTS \
	BFLB_PINMUX(10, uart1, cts, periph)

/* gpio10_uart1_tx */
#define GPIO10_UART1_TX \
	BFLB_PINMUX(10, uart1, tx, periph)

/* gpio10_uart1_rx */
#define GPIO10_UART1_RX \
	BFLB_PINMUX(10, uart1, rx, periph)

/* gpio10_pwm_ch0 */
#define GPIO10_PWM_CH0 \
	BFLB_PINMUX(10, pwm, ch0, periph)

/* gpio10_fem_gpio2 */
#define GPIO10_FEM_GPIO2 \
	BFLB_PINMUX(10, fem, gpio2, periph)

/* gpio10_jtag_tck */
#define GPIO10_JTAG_TCK \
	BFLB_PINMUX(10, jtag, tck, periph)

/* gpio10_mic_bias */
#define GPIO10_MIC_BIAS \
	BFLB_PINMUX(10, mic, bias, analog)

/* gpio10_adc_ch8 */
#define GPIO10_ADC_CH8 \
	BFLB_PINMUX(10, adc, ch8, analog)

/* gpio11_spi_sclk */
#define GPIO11_SPI_SCLK \
	BFLB_PINMUX(11, spi, sclk, periph)

/* gpio11_i2c_sda */
#define GPIO11_I2C_SDA \
	BFLB_PINMUX(11, i2c, sda, periph)

/* gpio11_uart0_rts */
#define GPIO11_UART0_RTS \
	BFLB_PINMUX(11, uart0, rts, periph)

/* gpio11_uart0_cts */
#define GPIO11_UART0_CTS \
	BFLB_PINMUX(11, uart0, cts, periph)

/* gpio11_uart0_tx */
#define GPIO11_UART0_TX \
	BFLB_PINMUX(11, uart0, tx, periph)

/* gpio11_uart0_rx */
#define GPIO11_UART0_RX \
	BFLB_PINMUX(11, uart0, rx, periph)

/* gpio11_uart1_rts */
#define GPIO11_UART1_RTS \
	BFLB_PINMUX(11, uart1, rts, periph)

/* gpio11_uart1_cts */
#define GPIO11_UART1_CTS \
	BFLB_PINMUX(11, uart1, cts, periph)

/* gpio11_uart1_tx */
#define GPIO11_UART1_TX \
	BFLB_PINMUX(11, uart1, tx, periph)

/* gpio11_uart1_rx */
#define GPIO11_UART1_RX \
	BFLB_PINMUX(11, uart1, rx, periph)

/* gpio11_pwm_ch1 */
#define GPIO11_PWM_CH1 \
	BFLB_PINMUX(11, pwm, ch1, periph)

/* gpio11_fem_gpio3 */
#define GPIO11_FEM_GPIO3 \
	BFLB_PINMUX(11, fem, gpio3, periph)

/* gpio11_jtag_tdo */
#define GPIO11_JTAG_TDO \
	BFLB_PINMUX(11, jtag, tdo, periph)

/* gpio11_adc_ch10 */
#define GPIO11_ADC_CH10 \
	BFLB_PINMUX(11, adc, ch10, analog)

/* gpio11_ir_tx */
#define GPIO11_IR_TX \
	BFLB_PINMUX(11, ir, tx, analog)

/* gpio11_ir_rx */
#define GPIO11_IR_RX \
	BFLB_PINMUX(11, ir, rx, input)

/* gpio12_spi_miso */
#define GPIO12_SPI_MISO \
	BFLB_PINMUX(12, spi, miso, periph)

/* gpio12_i2c_scl */
#define GPIO12_I2C_SCL \
	BFLB_PINMUX(12, i2c, scl, periph)

/* gpio12_uart0_rts */
#define GPIO12_UART0_RTS \
	BFLB_PINMUX(12, uart0, rts, periph)

/* gpio12_uart0_cts */
#define GPIO12_UART0_CTS \
	BFLB_PINMUX(12, uart0, cts, periph)

/* gpio12_uart0_tx */
#define GPIO12_UART0_TX \
	BFLB_PINMUX(12, uart0, tx, periph)

/* gpio12_uart0_rx */
#define GPIO12_UART0_RX \
	BFLB_PINMUX(12, uart0, rx, periph)

/* gpio12_uart1_rts */
#define GPIO12_UART1_RTS \
	BFLB_PINMUX(12, uart1, rts, periph)

/* gpio12_uart1_cts */
#define GPIO12_UART1_CTS \
	BFLB_PINMUX(12, uart1, cts, periph)

/* gpio12_uart1_tx */
#define GPIO12_UART1_TX \
	BFLB_PINMUX(12, uart1, tx, periph)

/* gpio12_uart1_rx */
#define GPIO12_UART1_RX \
	BFLB_PINMUX(12, uart1, rx, periph)

/* gpio12_pwm_ch2 */
#define GPIO12_PWM_CH2 \
	BFLB_PINMUX(12, pwm, ch2, periph)

/* gpio12_fem_gpio0 */
#define GPIO12_FEM_GPIO0 \
	BFLB_PINMUX(12, fem, gpio0, periph)

/* gpio12_jtag_tms */
#define GPIO12_JTAG_TMS \
	BFLB_PINMUX(12, jtag, tms, periph)

/* gpio12_adc_ch0 */
#define GPIO12_ADC_CH0 \
	BFLB_PINMUX(12, adc, ch0, analog)

/* gpio12_ir_rx */
#define GPIO12_IR_RX \
	BFLB_PINMUX(12, ir, rx, input)

/* gpio13_spi_mosi */
#define GPIO13_SPI_MOSI \
	BFLB_PINMUX(13, spi, mosi, periph)

/* gpio13_i2c_sda */
#define GPIO13_I2C_SDA \
	BFLB_PINMUX(13, i2c, sda, periph)

/* gpio13_uart0_rts */
#define GPIO13_UART0_RTS \
	BFLB_PINMUX(13, uart0, rts, periph)

/* gpio13_uart0_cts */
#define GPIO13_UART0_CTS \
	BFLB_PINMUX(13, uart0, cts, periph)

/* gpio13_uart0_tx */
#define GPIO13_UART0_TX \
	BFLB_PINMUX(13, uart0, tx, periph)

/* gpio13_uart0_rx */
#define GPIO13_UART0_RX \
	BFLB_PINMUX(13, uart0, rx, periph)

/* gpio13_uart1_rts */
#define GPIO13_UART1_RTS \
	BFLB_PINMUX(13, uart1, rts, periph)

/* gpio13_uart1_cts */
#define GPIO13_UART1_CTS \
	BFLB_PINMUX(13, uart1, cts, periph)

/* gpio13_uart1_tx */
#define GPIO13_UART1_TX \
	BFLB_PINMUX(13, uart1, tx, periph)

/* gpio13_uart1_rx */
#define GPIO13_UART1_RX \
	BFLB_PINMUX(13, uart1, rx, periph)

/* gpio13_pwm_ch3 */
#define GPIO13_PWM_CH3 \
	BFLB_PINMUX(13, pwm, ch3, periph)

/* gpio13_fem_gpio1 */
#define GPIO13_FEM_GPIO1 \
	BFLB_PINMUX(13, fem, gpio1, periph)

/* gpio13_jtag_tdi */
#define GPIO13_JTAG_TDI \
	BFLB_PINMUX(13, jtag, tdi, periph)

/* gpio13_adc_ch3 */
#define GPIO13_ADC_CH3 \
	BFLB_PINMUX(13, adc, ch3, analog)

/* gpio13_dac_cha */
#define GPIO13_DAC_CHA \
	BFLB_PINMUX(13, dac, cha, analog)

/* gpio13_ir_rx */
#define GPIO13_IR_RX \
	BFLB_PINMUX(13, ir, rx, input)

/* gpio14_spi_ss */
#define GPIO14_SPI_SS \
	BFLB_PINMUX(14, spi, ss, periph)

/* gpio14_i2c_scl */
#define GPIO14_I2C_SCL \
	BFLB_PINMUX(14, i2c, scl, periph)

/* gpio14_uart0_rts */
#define GPIO14_UART0_RTS \
	BFLB_PINMUX(14, uart0, rts, periph)

/* gpio14_uart0_cts */
#define GPIO14_UART0_CTS \
	BFLB_PINMUX(14, uart0, cts, periph)

/* gpio14_uart0_tx */
#define GPIO14_UART0_TX \
	BFLB_PINMUX(14, uart0, tx, periph)

/* gpio14_uart0_rx */
#define GPIO14_UART0_RX \
	BFLB_PINMUX(14, uart0, rx, periph)

/* gpio14_uart1_rts */
#define GPIO14_UART1_RTS \
	BFLB_PINMUX(14, uart1, rts, periph)

/* gpio14_uart1_cts */
#define GPIO14_UART1_CTS \
	BFLB_PINMUX(14, uart1, cts, periph)

/* gpio14_uart1_tx */
#define GPIO14_UART1_TX \
	BFLB_PINMUX(14, uart1, tx, periph)

/* gpio14_uart1_rx */
#define GPIO14_UART1_RX \
	BFLB_PINMUX(14, uart1, rx, periph)

/* gpio14_pwm_ch4 */
#define GPIO14_PWM_CH4 \
	BFLB_PINMUX(14, pwm, ch4, periph)

/* gpio14_fem_gpio1 */
#define GPIO14_FEM_GPIO1 \
	BFLB_PINMUX(14, fem, gpio1, periph)

/* gpio14_jtag_tck */
#define GPIO14_JTAG_TCK \
	BFLB_PINMUX(14, jtag, tck, periph)

/* gpio14_adc_ch2 */
#define GPIO14_ADC_CH2 \
	BFLB_PINMUX(14, adc, ch2, analog)

/* gpio14_dac_chb */
#define GPIO14_DAC_CHB \
	BFLB_PINMUX(14, dac, chb, analog)

/* gpio15_spi_sclk */
#define GPIO15_SPI_SCLK \
	BFLB_PINMUX(15, spi, sclk, periph)

/* gpio15_i2c_sda */
#define GPIO15_I2C_SDA \
	BFLB_PINMUX(15, i2c, sda, periph)

/* gpio15_uart0_rts */
#define GPIO15_UART0_RTS \
	BFLB_PINMUX(15, uart0, rts, periph)

/* gpio15_uart0_cts */
#define GPIO15_UART0_CTS \
	BFLB_PINMUX(15, uart0, cts, periph)

/* gpio15_uart0_tx */
#define GPIO15_UART0_TX \
	BFLB_PINMUX(15, uart0, tx, periph)

/* gpio15_uart0_rx */
#define GPIO15_UART0_RX \
	BFLB_PINMUX(15, uart0, rx, periph)

/* gpio15_uart1_rts */
#define GPIO15_UART1_RTS \
	BFLB_PINMUX(15, uart1, rts, periph)

/* gpio15_uart1_cts */
#define GPIO15_UART1_CTS \
	BFLB_PINMUX(15, uart1, cts, periph)

/* gpio15_uart1_tx */
#define GPIO15_UART1_TX \
	BFLB_PINMUX(15, uart1, tx, periph)

/* gpio15_uart1_rx */
#define GPIO15_UART1_RX \
	BFLB_PINMUX(15, uart1, rx, periph)

/* gpio15_pwm_ch0 */
#define GPIO15_PWM_CH0 \
	BFLB_PINMUX(15, pwm, ch0, periph)

/* gpio15_fem_gpio3 */
#define GPIO15_FEM_GPIO3 \
	BFLB_PINMUX(15, fem, gpio3, periph)

/* gpio15_jtag_tdo */
#define GPIO15_JTAG_TDO \
	BFLB_PINMUX(15, jtag, tdo, periph)

/* gpio15_adc_ch11 */
#define GPIO15_ADC_CH11 \
	BFLB_PINMUX(15, adc, ch11, analog)

/* gpio16_spi_miso */
#define GPIO16_SPI_MISO \
	BFLB_PINMUX(16, spi, miso, periph)

/* gpio16_i2c_scl */
#define GPIO16_I2C_SCL \
	BFLB_PINMUX(16, i2c, scl, periph)

/* gpio16_uart0_rts */
#define GPIO16_UART0_RTS \
	BFLB_PINMUX(16, uart0, rts, periph)

/* gpio16_uart0_cts */
#define GPIO16_UART0_CTS \
	BFLB_PINMUX(16, uart0, cts, periph)

/* gpio16_uart0_tx */
#define GPIO16_UART0_TX \
	BFLB_PINMUX(16, uart0, tx, periph)

/* gpio16_uart0_rx */
#define GPIO16_UART0_RX \
	BFLB_PINMUX(16, uart0, rx, periph)

/* gpio16_uart1_rts */
#define GPIO16_UART1_RTS \
	BFLB_PINMUX(16, uart1, rts, periph)

/* gpio16_uart1_cts */
#define GPIO16_UART1_CTS \
	BFLB_PINMUX(16, uart1, cts, periph)

/* gpio16_uart1_tx */
#define GPIO16_UART1_TX \
	BFLB_PINMUX(16, uart1, tx, periph)

/* gpio16_uart1_rx */
#define GPIO16_UART1_RX \
	BFLB_PINMUX(16, uart1, rx, periph)

/* gpio16_pwm_ch1 */
#define GPIO16_PWM_CH1 \
	BFLB_PINMUX(16, pwm, ch1, periph)

/* gpio16_fem_gpio0 */
#define GPIO16_FEM_GPIO0 \
	BFLB_PINMUX(16, fem, gpio0, periph)

/* gpio16_jtag_tms */
#define GPIO16_JTAG_TMS \
	BFLB_PINMUX(16, jtag, tms, periph)

/* gpio17_flash_d3 */
#define GPIO17_FLASH_D3 \
	BFLB_PINMUX(17, flash, d3, periph)

/* gpio17_spi_mosi */
#define GPIO17_SPI_MOSI \
	BFLB_PINMUX(17, spi, mosi, periph)

/* gpio17_i2c_sda */
#define GPIO17_I2C_SDA \
	BFLB_PINMUX(17, i2c, sda, periph)

/* gpio17_uart0_rts */
#define GPIO17_UART0_RTS \
	BFLB_PINMUX(17, uart0, rts, periph)

/* gpio17_uart0_cts */
#define GPIO17_UART0_CTS \
	BFLB_PINMUX(17, uart0, cts, periph)

/* gpio17_uart0_tx */
#define GPIO17_UART0_TX \
	BFLB_PINMUX(17, uart0, tx, periph)

/* gpio17_uart0_rx */
#define GPIO17_UART0_RX \
	BFLB_PINMUX(17, uart0, rx, periph)

/* gpio17_uart1_rts */
#define GPIO17_UART1_RTS \
	BFLB_PINMUX(17, uart1, rts, periph)

/* gpio17_uart1_cts */
#define GPIO17_UART1_CTS \
	BFLB_PINMUX(17, uart1, cts, periph)

/* gpio17_uart1_tx */
#define GPIO17_UART1_TX \
	BFLB_PINMUX(17, uart1, tx, periph)

/* gpio17_uart1_rx */
#define GPIO17_UART1_RX \
	BFLB_PINMUX(17, uart1, rx, periph)

/* gpio17_pwm_ch2 */
#define GPIO17_PWM_CH2 \
	BFLB_PINMUX(17, pwm, ch2, periph)

/* gpio17_fem_gpio1 */
#define GPIO17_FEM_GPIO1 \
	BFLB_PINMUX(17, fem, gpio1, periph)

/* gpio17_jtag_tdi */
#define GPIO17_JTAG_TDI \
	BFLB_PINMUX(17, jtag, tdi, periph)

/* gpio18_flash_d2 */
#define GPIO18_FLASH_D2 \
	BFLB_PINMUX(18, flash, d2, periph)

/* gpio18_spi_ss */
#define GPIO18_SPI_SS \
	BFLB_PINMUX(18, spi, ss, periph)

/* gpio18_i2c_scl */
#define GPIO18_I2C_SCL \
	BFLB_PINMUX(18, i2c, scl, periph)

/* gpio18_uart0_rts */
#define GPIO18_UART0_RTS \
	BFLB_PINMUX(18, uart0, rts, periph)

/* gpio18_uart0_cts */
#define GPIO18_UART0_CTS \
	BFLB_PINMUX(18, uart0, cts, periph)

/* gpio18_uart0_tx */
#define GPIO18_UART0_TX \
	BFLB_PINMUX(18, uart0, tx, periph)

/* gpio18_uart0_rx */
#define GPIO18_UART0_RX \
	BFLB_PINMUX(18, uart0, rx, periph)

/* gpio18_uart1_rts */
#define GPIO18_UART1_RTS \
	BFLB_PINMUX(18, uart1, rts, periph)

/* gpio18_uart1_cts */
#define GPIO18_UART1_CTS \
	BFLB_PINMUX(18, uart1, cts, periph)

/* gpio18_uart1_tx */
#define GPIO18_UART1_TX \
	BFLB_PINMUX(18, uart1, tx, periph)

/* gpio18_uart1_rx */
#define GPIO18_UART1_RX \
	BFLB_PINMUX(18, uart1, rx, periph)

/* gpio18_pwm_ch3 */
#define GPIO18_PWM_CH3 \
	BFLB_PINMUX(18, pwm, ch3, periph)

/* gpio18_fem_gpio2 */
#define GPIO18_FEM_GPIO2 \
	BFLB_PINMUX(18, fem, gpio2, periph)

/* gpio18_jtag_tck */
#define GPIO18_JTAG_TCK \
	BFLB_PINMUX(18, jtag, tck, periph)

/* gpio19_flash_d1 */
#define GPIO19_FLASH_D1 \
	BFLB_PINMUX(19, flash, d1, periph)

/* gpio19_spi_sclk */
#define GPIO19_SPI_SCLK \
	BFLB_PINMUX(19, spi, sclk, periph)

/* gpio19_i2c_sda */
#define GPIO19_I2C_SDA \
	BFLB_PINMUX(19, i2c, sda, periph)

/* gpio19_uart0_rts */
#define GPIO19_UART0_RTS \
	BFLB_PINMUX(19, uart0, rts, periph)

/* gpio19_uart0_cts */
#define GPIO19_UART0_CTS \
	BFLB_PINMUX(19, uart0, cts, periph)

/* gpio19_uart0_tx */
#define GPIO19_UART0_TX \
	BFLB_PINMUX(19, uart0, tx, periph)

/* gpio19_uart0_rx */
#define GPIO19_UART0_RX \
	BFLB_PINMUX(19, uart0, rx, periph)

/* gpio19_uart1_rts */
#define GPIO19_UART1_RTS \
	BFLB_PINMUX(19, uart1, rts, periph)

/* gpio19_uart1_cts */
#define GPIO19_UART1_CTS \
	BFLB_PINMUX(19, uart1, cts, periph)

/* gpio19_uart1_tx */
#define GPIO19_UART1_TX \
	BFLB_PINMUX(19, uart1, tx, periph)

/* gpio19_uart1_rx */
#define GPIO19_UART1_RX \
	BFLB_PINMUX(19, uart1, rx, periph)

/* gpio19_pwm_ch4 */
#define GPIO19_PWM_CH4 \
	BFLB_PINMUX(19, pwm, ch4, periph)

/* gpio19_fem_gpio3 */
#define GPIO19_FEM_GPIO3 \
	BFLB_PINMUX(19, fem, gpio3, periph)

/* gpio19_jtag_tdo */
#define GPIO19_JTAG_TDO \
	BFLB_PINMUX(19, jtag, tdo, periph)

/* gpio20_flash_d0 */
#define GPIO20_FLASH_D0 \
	BFLB_PINMUX(20, flash, d0, periph)

/* gpio20_spi_miso */
#define GPIO20_SPI_MISO \
	BFLB_PINMUX(20, spi, miso, periph)

/* gpio20_i2c_scl */
#define GPIO20_I2C_SCL \
	BFLB_PINMUX(20, i2c, scl, periph)

/* gpio20_uart0_rts */
#define GPIO20_UART0_RTS \
	BFLB_PINMUX(20, uart0, rts, periph)

/* gpio20_uart0_cts */
#define GPIO20_UART0_CTS \
	BFLB_PINMUX(20, uart0, cts, periph)

/* gpio20_uart0_tx */
#define GPIO20_UART0_TX \
	BFLB_PINMUX(20, uart0, tx, periph)

/* gpio20_uart0_rx */
#define GPIO20_UART0_RX \
	BFLB_PINMUX(20, uart0, rx, periph)

/* gpio20_uart1_rts */
#define GPIO20_UART1_RTS \
	BFLB_PINMUX(20, uart1, rts, periph)

/* gpio20_uart1_cts */
#define GPIO20_UART1_CTS \
	BFLB_PINMUX(20, uart1, cts, periph)

/* gpio20_uart1_tx */
#define GPIO20_UART1_TX \
	BFLB_PINMUX(20, uart1, tx, periph)

/* gpio20_uart1_rx */
#define GPIO20_UART1_RX \
	BFLB_PINMUX(20, uart1, rx, periph)

/* gpio20_pwm_ch0 */
#define GPIO20_PWM_CH0 \
	BFLB_PINMUX(20, pwm, ch0, periph)

/* gpio20_fem_gpio0 */
#define GPIO20_FEM_GPIO0 \
	BFLB_PINMUX(20, fem, gpio0, periph)

/* gpio20_jtag_tms */
#define GPIO20_JTAG_TMS \
	BFLB_PINMUX(20, jtag, tms, periph)

/* gpio21_flash_cs */
#define GPIO21_FLASH_CS \
	BFLB_PINMUX(21, flash, cs, periph)

/* gpio21_spi_mosi */
#define GPIO21_SPI_MOSI \
	BFLB_PINMUX(21, spi, mosi, periph)

/* gpio21_i2c_sda */
#define GPIO21_I2C_SDA \
	BFLB_PINMUX(21, i2c, sda, periph)

/* gpio21_uart0_rts */
#define GPIO21_UART0_RTS \
	BFLB_PINMUX(21, uart0, rts, periph)

/* gpio21_uart0_cts */
#define GPIO21_UART0_CTS \
	BFLB_PINMUX(21, uart0, cts, periph)

/* gpio21_uart0_tx */
#define GPIO21_UART0_TX \
	BFLB_PINMUX(21, uart0, tx, periph)

/* gpio21_uart0_rx */
#define GPIO21_UART0_RX \
	BFLB_PINMUX(21, uart0, rx, periph)

/* gpio21_uart1_rts */
#define GPIO21_UART1_RTS \
	BFLB_PINMUX(21, uart1, rts, periph)

/* gpio21_uart1_cts */
#define GPIO21_UART1_CTS \
	BFLB_PINMUX(21, uart1, cts, periph)

/* gpio21_uart1_tx */
#define GPIO21_UART1_TX \
	BFLB_PINMUX(21, uart1, tx, periph)

/* gpio21_uart1_rx */
#define GPIO21_UART1_RX \
	BFLB_PINMUX(21, uart1, rx, periph)

/* gpio21_pwm_ch1 */
#define GPIO21_PWM_CH1 \
	BFLB_PINMUX(21, pwm, ch1, periph)

/* gpio21_fem_gpio1 */
#define GPIO21_FEM_GPIO1 \
	BFLB_PINMUX(21, fem, gpio1, periph)

/* gpio21_jtag_tdi */
#define GPIO21_JTAG_TDI \
	BFLB_PINMUX(21, jtag, tdi, periph)

/* gpio22_flash_clk_out */
#define GPIO22_FLASH_CLK_OUT \
	BFLB_PINMUX(22, flash, clk_out, periph)

/* gpio22_spi_ss */
#define GPIO22_SPI_SS \
	BFLB_PINMUX(22, spi, ss, periph)

/* gpio22_i2c_scl */
#define GPIO22_I2C_SCL \
	BFLB_PINMUX(22, i2c, scl, periph)

/* gpio22_uart0_rts */
#define GPIO22_UART0_RTS \
	BFLB_PINMUX(22, uart0, rts, periph)

/* gpio22_uart0_cts */
#define GPIO22_UART0_CTS \
	BFLB_PINMUX(22, uart0, cts, periph)

/* gpio22_uart0_tx */
#define GPIO22_UART0_TX \
	BFLB_PINMUX(22, uart0, tx, periph)

/* gpio22_uart0_rx */
#define GPIO22_UART0_RX \
	BFLB_PINMUX(22, uart0, rx, periph)

/* gpio22_uart1_rts */
#define GPIO22_UART1_RTS \
	BFLB_PINMUX(22, uart1, rts, periph)

/* gpio22_uart1_cts */
#define GPIO22_UART1_CTS \
	BFLB_PINMUX(22, uart1, cts, periph)

/* gpio22_uart1_tx */
#define GPIO22_UART1_TX \
	BFLB_PINMUX(22, uart1, tx, periph)

/* gpio22_uart1_rx */
#define GPIO22_UART1_RX \
	BFLB_PINMUX(22, uart1, rx, periph)

/* gpio22_pwm_ch2 */
#define GPIO22_PWM_CH2 \
	BFLB_PINMUX(22, pwm, ch2, periph)

/* gpio22_fem_gpio2 */
#define GPIO22_FEM_GPIO2 \
	BFLB_PINMUX(22, fem, gpio2, periph)

/* gpio22_jtag_tck */
#define GPIO22_JTAG_TCK \
	BFLB_PINMUX(22, jtag, tck, periph)

#endif /* DT_BINDINGS_PINCTRL_BFLB_BL604X_PINCTRL_H_ */
