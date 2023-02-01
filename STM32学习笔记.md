## STM32学习笔记

### 开发环境搭建

ubuntu + st-link + gcc-arm-none-eabi

* 安装gcc-arm-none-eabi, 重要的是库文件, 可以试试不安装此软件
* 去github下载st-link的驱动(deb包)并安装
* 安装libusb-1.0-0-dev
* VSCode以及stm32CubeMX自行安装
* 串口调试工具可使用cutecom, 运行命令`sudo apt-get install cutecom`即可安装

### 1. PWM输出

使用stm32CubeMX设置时钟为72MHz,之后配置RCC启用高速时钟,选择合适的定时器TIM并设置其时钟源为内部时钟,之后选择通道channel并配置参数,中断以及GPIO管脚.最后生成代码.

用编辑器在主函数后面添加代码使能定时器的相应通道`HAL_TIM_PWM_Start()`.并使用`__HAL_TIM_SetCompare()`设置其占空比.

> 注意:使能时钟通道的代码要放在系统及其他硬件初始化代码之后.

### 2. 串口通讯

1. 设置RCC时钟为外部高速时钟,并配置外设始终树
2. 在串口源文件中定义数据发送、接收缓冲区, 以及字节数据接收缓冲区
3. 在串口初始化函数`MX_USART1_UART_Init()`最后添加`HAL_UART_Receive_IT()`设置接收数据的存储位置,并使能中断.
4. 复写函数`void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)`,定义自己的接收中断处理函数

