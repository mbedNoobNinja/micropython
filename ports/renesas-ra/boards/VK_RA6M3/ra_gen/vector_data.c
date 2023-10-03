/* generated vector source file - do not edit */
#include "bsp_api.h"
/* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
#if VECTOR_DATA_IRQ_COUNT > 0
BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
{
    [0] = sci_uart_rxi_isr,         /* SCI7 RXI (Received data full) */
    [1] = sci_uart_txi_isr,         /* SCI7 TXI (Transmit data empty) */
    [2] = sci_uart_tei_isr,         /* SCI7 TEI (Transmit end) */
    [3] = sci_uart_eri_isr,         /* SCI7 ERI (Receive error) */
    [4] = sci_uart_rxi_isr,         /* SCI8 RXI (Received data full) */
    [5] = sci_uart_txi_isr,         /* SCI8 TXI (Transmit data empty) */
    [6] = sci_uart_tei_isr,         /* SCI8 TEI (Transmit end) */
    [7] = sci_uart_eri_isr,         /* SCI8 ERI (Receive error) */
    [8] = sci_uart_rxi_isr,         /* SCI9 RXI (Received data full) */
    [9] = sci_uart_txi_isr,         /* SCI9 TXI (Transmit data empty) */
    [10] = sci_uart_tei_isr,         /* SCI9 TEI (Transmit end) */
    [11] = sci_uart_eri_isr,         /* SCI9 ERI (Receive error) */
    [12] = rtc_alarm_periodic_isr,         /* RTC ALARM (Alarm interrupt) */
    [13] = rtc_alarm_periodic_isr,         /* RTC PERIOD (Periodic interrupt) */
    [14] = rtc_carry_isr,         /* RTC CARRY (Carry interrupt) */
    [15] = agt_int_isr,         /* AGT0 INT (AGT interrupt) */
    [16] = agt_int_isr,         /* AGT1 INT (AGT interrupt) */
    [17] = r_icu_isr,         /* ICU IRQ7 (External pin interrupt 7) */
    [18] = r_icu_isr,         /* ICU IRQ11 (External pin interrupt 11) */
    [19] = r_icu_isr,         /* ICU IRQ12 (External pin interrupt 12) */
    [20] = r_icu_isr,         /* ICU IRQ13 (External pin interrupt 13) */
    [21] = spi_rxi_isr,         /* SPI1 RXI (Receive buffer full) */
    [22] = spi_txi_isr,         /* SPI1 TXI (Transmit buffer empty) */
    [23] = spi_tei_isr,         /* SPI1 TEI (Transmission complete event) */
    [24] = spi_eri_isr,         /* SPI1 ERI (Error) */
    [25] = iic_master_rxi_isr,         /* IIC1 RXI (Receive data full) */
    [26] = iic_master_txi_isr,         /* IIC1 TXI (Transmit data empty) */
    [27] = iic_master_tei_isr,         /* IIC1 TEI (Transmit end) */
    [28] = iic_master_eri_isr,         /* IIC1 ERI (Transfer error) */
    [29] = sdhimmc_accs_isr,         /* SDHIMMC1 ACCS (Card access) */
    [30] = sdhimmc_card_isr,         /* SDHIMMC1 CARD (Card detect) */
    [31] = sdhimmc_dma_req_isr,         /* SDHIMMC1 DMA REQ (DMA transfer request) */
    [32] = ether_eint_isr,         /* EDMAC0 EINT (EDMAC 0 interrupt) */
    [33] = glcdc_line_detect_isr,         /* GLCDC LINE DETECT (Specified line) */
    [34] = sci_i2c_txi_isr,         /* SCI0 TXI (Transmit data empty) */
    [35] = sci_i2c_tei_isr,         /* SCI0 TEI (Transmit end) */
    [36] = sci_i2c_rxi_isr,         /* SCI0 RXI (Receive data full) */
    [37] = pdc_int_isr,         /* PDC INT (Error interrupt) */
    [38] = pdc_transfer_req_isr,         /* PDC RECEIVE DATA READY (Receive data ready interrupt) */
    [39] = jpeg_jedi_isr,         /* JPEG JEDI (Compression/decompression process interrupt) */
    [40] = jpeg_jdti_isr,         /* JPEG JDTI (Data transfer interrupt) */
};
const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
{
    [0] = BSP_PRV_IELS_ENUM(EVENT_SCI7_RXI),         /* SCI7 RXI (Received data full) */
    [1] = BSP_PRV_IELS_ENUM(EVENT_SCI7_TXI),         /* SCI7 TXI (Transmit data empty) */
    [2] = BSP_PRV_IELS_ENUM(EVENT_SCI7_TEI),         /* SCI7 TEI (Transmit end) */
    [3] = BSP_PRV_IELS_ENUM(EVENT_SCI7_ERI),         /* SCI7 ERI (Receive error) */
    [4] = BSP_PRV_IELS_ENUM(EVENT_SCI8_RXI),         /* SCI8 RXI (Received data full) */
    [5] = BSP_PRV_IELS_ENUM(EVENT_SCI8_TXI),         /* SCI8 TXI (Transmit data empty) */
    [6] = BSP_PRV_IELS_ENUM(EVENT_SCI8_TEI),         /* SCI8 TEI (Transmit end) */
    [7] = BSP_PRV_IELS_ENUM(EVENT_SCI8_ERI),         /* SCI8 ERI (Receive error) */
    [8] = BSP_PRV_IELS_ENUM(EVENT_SCI9_RXI),         /* SCI9 RXI (Received data full) */
    [9] = BSP_PRV_IELS_ENUM(EVENT_SCI9_TXI),         /* SCI9 TXI (Transmit data empty) */
    [10] = BSP_PRV_IELS_ENUM(EVENT_SCI9_TEI),         /* SCI9 TEI (Transmit end) */
    [11] = BSP_PRV_IELS_ENUM(EVENT_SCI9_ERI),         /* SCI9 ERI (Receive error) */
    [12] = BSP_PRV_IELS_ENUM(EVENT_RTC_ALARM),         /* RTC ALARM (Alarm interrupt) */
    [13] = BSP_PRV_IELS_ENUM(EVENT_RTC_PERIOD),         /* RTC PERIOD (Periodic interrupt) */
    [14] = BSP_PRV_IELS_ENUM(EVENT_RTC_CARRY),         /* RTC CARRY (Carry interrupt) */
    [15] = BSP_PRV_IELS_ENUM(EVENT_AGT0_INT),         /* AGT0 INT (AGT interrupt) */
    [16] = BSP_PRV_IELS_ENUM(EVENT_AGT1_INT),         /* AGT1 INT (AGT interrupt) */
    [17] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ7),         /* ICU IRQ7 (External pin interrupt 7) */
    [18] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ11),         /* ICU IRQ11 (External pin interrupt 11) */
    [19] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ12),         /* ICU IRQ12 (External pin interrupt 12) */
    [20] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ13),         /* ICU IRQ13 (External pin interrupt 13) */
    [21] = BSP_PRV_IELS_ENUM(EVENT_SPI1_RXI),         /* SPI1 RXI (Receive buffer full) */
    [22] = BSP_PRV_IELS_ENUM(EVENT_SPI1_TXI),         /* SPI1 TXI (Transmit buffer empty) */
    [23] = BSP_PRV_IELS_ENUM(EVENT_SPI1_TEI),         /* SPI1 TEI (Transmission complete event) */
    [24] = BSP_PRV_IELS_ENUM(EVENT_SPI1_ERI),         /* SPI1 ERI (Error) */
    [25] = BSP_PRV_IELS_ENUM(EVENT_IIC1_RXI),         /* IIC1 RXI (Receive data full) */
    [26] = BSP_PRV_IELS_ENUM(EVENT_IIC1_TXI),         /* IIC1 TXI (Transmit data empty) */
    [27] = BSP_PRV_IELS_ENUM(EVENT_IIC1_TEI),         /* IIC1 TEI (Transmit end) */
    [28] = BSP_PRV_IELS_ENUM(EVENT_IIC1_ERI),         /* IIC1 ERI (Transfer error) */
    [29] = BSP_PRV_IELS_ENUM(EVENT_SDHIMMC1_ACCS),         /* SDHIMMC1 ACCS (Card access) */
    [30] = BSP_PRV_IELS_ENUM(EVENT_SDHIMMC1_CARD),         /* SDHIMMC1 CARD (Card detect) */
    [31] = BSP_PRV_IELS_ENUM(EVENT_SDHIMMC1_DMA_REQ),         /* SDHIMMC1 DMA REQ (DMA transfer request) */
    [32] = BSP_PRV_IELS_ENUM(EVENT_EDMAC0_EINT),         /* EDMAC0 EINT (EDMAC 0 interrupt) */
    [33] = BSP_PRV_IELS_ENUM(EVENT_GLCDC_LINE_DETECT),         /* GLCDC LINE DETECT (Specified line) */
    [34] = BSP_PRV_IELS_ENUM(EVENT_SCI0_TXI),         /* SCI0 TXI (Transmit data empty) */
    [35] = BSP_PRV_IELS_ENUM(EVENT_SCI0_TEI),         /* SCI0 TEI (Transmit end) */
    [36] = BSP_PRV_IELS_ENUM(EVENT_SCI0_RXI),         /* SCI0 RXI (Receive data full) */
    [37] = BSP_PRV_IELS_ENUM(EVENT_PDC_INT),         /* PDC INT (Error interrupt) */
    [38] = BSP_PRV_IELS_ENUM(EVENT_PDC_RECEIVE_DATA_READY),         /* PDC RECEIVE DATA READY (Receive data ready interrupt) */
    [39] = BSP_PRV_IELS_ENUM(EVENT_JPEG_JEDI),         /* JPEG JEDI (Compression/decompression process interrupt) */
    [40] = BSP_PRV_IELS_ENUM(EVENT_JPEG_JDTI),         /* JPEG JDTI (Data transfer interrupt) */
};
#endif
