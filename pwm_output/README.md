## stm32输出pwm-实现呼吸灯
### 1. stm32cubemx配置
1. 查看点亮LED灯的引脚,假设为GPIO_LED
2. 使能高速时钟HSE并在RCC中设置外部时钟源,时钟设置72Mhz
3. 选择定时器以及通道为`PWM Generation`. 如果要计时,可以开启定时器中断
4. 参数设置中,设置预分频:此时定时器是72Mhz,也就是定时器每72分之一us就计数一次. 如果想让定时器1us计数一次,就要预分频为1Mhz,这样就可以设置预分频系数为71(72 - 1, 从0计数).
5. 设置计数周期为499(500 - 1), 这样输出的PWM就以500us为一个周期.
6. 这样用户可以通过接口设置CCR1寄存器的值来修改占空比, 通过计数周期和预分频系数设置PWM(周期)频率
7. 生成项目文件

### 2. 编辑项目代码
1. 在主函数中使能定时器的相应通道,添加代码`HAL_TIM_PWM_Start()`
2. 之后可以在一个循环中通过`__HAL_TIM_SetCompare()`设置CCR1寄存器的值来设置占空比
