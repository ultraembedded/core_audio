### Audio controller (I2S, SPDIF, DAC)

Github:   [https://github.com/ultraembedded/core_audio](https://github.com/ultraembedded/core_audio)

This component is a basic audio controller providing I2S, SPDIF, and DAC outputs.  
Simple to drive AXI4-L register interface, with built in 2048 entry buffer and interrupt on programmable threshold.

##### Features
* SPDIF transmitter supporting 16-bit sample width @ 44.1KHz or 48KHz.
* I2S master (SCK, SDATA, WS).
* 2 channel sigma delta DAC outputs.
* AXI4-L register interface.
* 8KB RAM buffer inferred (maps blockRAM on Xilinx) (2048 x 16-bit x 2).
* Programmable interrupt threshold.
* Single interrupt output.

##### Instance
* Top: audio
* Clock: clk_i
* Reset: rst_i - Asynchronous, active high

##### Register Map

| Offset | Name | Description   |
| ------ | ---- | ------------- |
| 0x00 | AUDIO_CFG | [RW] Configuration Register |
| 0x04 | AUDIO_STATUS | [R] UART Status Register |
| 0x08 | AUDIO_CLK_DIV | [RW] Clock divisor |
| 0x0c | AUDIO_CLK_FRAC | [RW] Clock divisor (fractional part) |
| 0x20 | AUDIO_FIFO_WRITE | [W] Audio data write FIFO |

##### Register: AUDIO_CFG

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 15:0 | INT_THRESHOLD | Buffer low watermark interrupt threshold |
| 16 | BYTE_SWAP | Byte order swap on buffer write |
| 17 | CH_SWAP | Channel swap |
| 19:18 | TARGET | 0=I2S,1=SPDIF,2=DAC |
| 26:24 | VOL_CTRL | Volume control (0 = max, 7 = min) |
| 31 | BUFFER_RST | Flush audio buffer |

##### Register: AUDIO_STATUS

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 31:16 | LEVEL | FIFO level |
| 1 | FULL | Buffer full |
| 0 | EMPTY | Buffer empty |

##### Register: AUDIO_CLK_DIV

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 15:0 | WHOLE_CYCLES | Number of whole cycles to divide clk by (clk_out = clk/(whole_cycles+1)) |

##### Register: AUDIO_CLK_FRAC

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 15:0 | NUMERATOR | Fractional clock divider numerator |
| 31:16 | DENOMINATOR | Fractional clock divider denominator |

##### Register: AUDIO_FIFO_WRITE

| Bits | Name | Description    |
| ---- | ---- | -------------- |
| 15:0 | CH_B | Channel B audio sample write |
| 31:16 | CH_A | Channel A audio sample write |

