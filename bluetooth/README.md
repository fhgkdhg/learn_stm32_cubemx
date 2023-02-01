## stm32串口通信 结合HC-05蓝牙模块(目前蓝牙模块设置为波特率:115200, 无奇偶校验, 字长8bits, 停止位1)
### 1.接线
>       stm32       bluetooth
>        5v    -->     vcc
>        gnd   -->     gnd
>       usart.tx -->   rxd
>       usart.rx -->   txd

### 2. stm32cubemx 设置
1. 使能高速时钟(HSE)并在RCC中设置外部时钟源, 在时钟设置里面配置最高72MHz.
2. USART1使用异步模式,使能中断并配置参数(波特率115200, 字长8bit, 无奇偶校验, 停止位1bit, 数据方向收发)
3. 项目管理中配置工具链为makefile,代码生成配置为外设单独生成.c .h文件
4. 生成项目文件

### 3. 编辑项目代码
1. 用编辑器打开项目,在usart.c中定义数据缓冲区,并在头文件中声明
2. 主函数中调用后面调用`HAL_UART_Receive_IT()`,设置接收数据的存放位置,每次接收1字节数据.
3. 在中断处理相关的文件`stm32f1xx_it.c`中重写`void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)`串口数据接收完毕的中断处理函数.数据处理完成后,重新设置接收数据的存放位置`HAL_UART_Receive_IT(&huart1, &data, 1u)`
4. 在usart.c中定义自己的数据发送函数,使用`HAL_UART_Transmit()`发送数据