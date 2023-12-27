
# Kidsblock tutorial

##  Getting started with kidsblock

**Instruction**

The Kidsblock, based on the Scratch graphical programming software, integrates multiple mainstream mainboards, sensors as well as modules. It can be programmed by dragging graphical blocks and using the C/C++ programming language, making programming easy and interesting for children to learn.

**Download and install KidsBlock software**

**[Windows system](https://www.kidsblock.cn/Down/KidsBlock.exe)**

**[MACOS system](https://www.kidsblock.cn/Down/KidsBlock-MACOS.dmg)**

**How to use KidsBlock**

**Interface**

![](media/1d07c862c2e059febe07f1522290513d.png)

Click![](media/3dd044ace633a5f7218b0d19a55ff9cf.png)to switch to different languages

![无标题](media/a26ac98fda5eb460bae6370e017e1869.png)

**Install driver**

Click![](media/ceea175e15c8425a1a70baaaf56d40b3.png)to select“**Install driver**”.

Note: If the driver is not installed, as shown below;

![](media/bef7e6706a96aa449213e76f661a8530.png)

Click “Next” at the **Device Driver Installation Wizard** page.

![](media/4c104ba0a545ee1041c2b826497c6c0f.png)

After a while, click“Finish”

![](media/fca8d2cd82b6cc8026cd05d3f3e4536a.png)

Then click“Next”.

![](media/c2f1cc5d63d3d3b2534ccce20f38fd62.png)

And click“Finish”.

![](media/1acc73921191044749961892aa5beeae.png)

Then click“**Allow**”and“**Install**”

![](media/f5855178a9320b2b9440fb025dae31cb.png)

![](media/f5855178a9320b2b9440fb025dae31cb.png)

After a while，click“Finish”

![](media/1e9d4fc27460ab88bb3d30b85b71ffbf.png)

Select“Extract”

![](media/8b7694d9158b63cd0113dd422c7dec54.png)

Click“**Next**”

![](media/9a0d50d923ba8534cfd5cfb23c93a339.png)

Next, click“**I accept this agreement**”and“**Next**”

![](media/bd39d1e73f87cc7345ab0d80784d8bf7.png)

Click“Finish”.

![](media/819da99e656406de8c7446febf1cef82.png)

After a while, click“**INSTALL”**

![](media/e7d93c27bcd6582a837ae61c3bb5589a.png)

After a few seconds, when the driver is installed, just click“**OK**”

![](media/c434a3523857af84ec8f2e0fe5091741.png)

Click ![](media/bfbf7c471ede03845519b11961a13837.png) to enter the main page, select the control board needed. In this project, we select“**CodingRobot**”and click **Connect,** then it is connected.

Click **Go to Editor** to return the code editor.

Icon ![](media/bfbf7c471ede03845519b11961a13837.png) will change into ![](media/832c517d9001f3651f20b9d43a2cd1a9.png) and ![](media/db0135c23e5313dac75a33d7d2faa529.png)will change into ![](media/7c3a292eb2fa4960da8e706d775b2d68.png). This means the **CodingRobot** and ports（COM）are connected.

![](media/2cc33f539ff5aa067124300bc62b953f.png)

![](media/2953c125165edf2769989b4721f0581f.png)

![](media/a47b2cbc571a47aa583d52990d25d788.png)

![](media/0e94d8010dcfcd02492d47398a89dde9.png)

If the“**CodingRobot**” is connected , but icon ![](media/db0135c23e5313dac75a33d7d2faa529.png)doesn’t change into ![](media/7c3a292eb2fa4960da8e706d775b2d68.png). You need to click ![](media/db0135c23e5313dac75a33d7d2faa529.png)to connect the COM port.

Click ![](media/db0135c23e5313dac75a33d7d2faa529.png) and **Connect.**

Then you will find a page pop up, showing **Connected.**

![](media/0e9e9135861a2630e4f2c153ce958709.png)

![](media/2953c125165edf2769989b4721f0581f.png)

![](media/a47b2cbc571a47aa583d52990d25d788.png)

![](media/0e94d8010dcfcd02492d47398a89dde9.png)

![图片1](media/9a4b21f79948d3458c4c7186e06facc9.png)

To disconnect the port, just click ![](media/7c3a292eb2fa4960da8e706d775b2d68.png) and **Disconnect**

![](media/0f5fada42589e960a5f28239a58ca890.png)

Note: if you want to update libraries of KidsBlock, click ![](media/49ea7c72ac42a9f39deed5aeef6a3ecc.png) then Clear cache and restart

![](media/e716fa3d504ad8437250aa3091394093.png)

**How to open SB3 type files**

Double-click SB3 type files to open them.

For instance, open ![](media/ae5cd6876b3013f770862c5f62d3dd63.png), then we need to double-click ![](media/ae5cd6876b3013f770862c5f62d3dd63.png).

![](media/24eb94a7916094e9e300765393b4fd2d.png)

Open Kidsblock，click **file and Load from your computer**，then select the SB3 type file on the computer.（for example ![](media/ae5cd6876b3013f770862c5f62d3dd63.png)）

![](media/8a39d0edec305298402df4216e984b61.png)

![](media/f84047c684c9ee5c30cec581cac30272.png)

![](media/24eb94a7916094e9e300765393b4fd2d.png)


## Projects

### Project 01: Blinking LED

**Introduction：**

![](media/ac163d92577812e1bcb9fe8afc99c642.png)

For starters and enthusiasts, LED Blink is a fundamental program.

LED, the abbreviation of light emitting diodes, consists of Ga, As, P, N chemical compound and so on. The LED can flash diverse color by altering the delay time in the test code.

In the circuit, power on GND and VCC, the LED will be on if S end is high level; nevertheless, it will go off.

In the experiment, we make the LED module blink through the test code.

**Specification：**

![](media/11f5eb648b0cce24f6ae5fe427770764.jpeg)

-   Control interface: digital port
-   Working voltage: DC 3.3-5V
-   Port: EASY plug
-   LED display color: seven colors
**Connection Diagram**

![](media/34a799ee1ae72f0851bea44afedf595c.png)

This Kidsbits programming blocks LED module is compatible with LEGO blocks and the yellow robot. To wire up easily, we adapt the EASY plug to hinder the reverse wiring-up. As shown below, we connect the LED module to the digital port 12(D12)

**Test Code**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)
![](media/87b2d1cfdca8c0724b23d45098af89bb.png)
![](media/07317fa27bbf56a49d4ca7dae5a36db3.png)

Complete Program

![123](media/Project_01.png)

**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, the LED connected to D12 blinks circularly, with an interval of 500ms.

### Project 02: Playing Music

**Introduction：**

We can use Arduino to make many interactive works, of which the most commonly used is acoustic-optic display.

The buzzer we introduced here is a passive buzzer. It cannot be actuated by itself, but by external pulse frequencies. The passive buzzer doesn’t carry with vibrator inside, so it need external sine or square wave to drive. It can produce slight sound when connecting directly to power supply. It features controlling sound frequency and producing the sound of“do re mi fa so la si”.Finally, let the buzzer play a specific song.

**Passive Buzzer：**

![](media/56a3e0e304b6db56868c4f3d608626b5.png)

![QQ图片20210816162814-2](media/f6bed4fda51504082f498a2ea0b0c0b7.png)

**Advantages：**
-   Low cost
-   the sound frequency is high
-   In some experiments, passive buzzer and LED can use a IO port jointly.
**How to use passive buzzer**

Passive buzzer is controlled by PWM pulse width rather than tones.

PWM is a means of controlling the analog output via digital means. Digital control is used to generate square waves with different duty cycles (a signal that constantly switches between high and low levels) to control the analog output.In general, the input voltages of ports are 0V and 5V.

![](media/553f3d1b6ca04e1aa0479841dd075fa2.png)

In the above figure, the green line represents a period, and value of analogWrite() corresponds to a percentage which is called Duty Cycle as well. Duty cycle implies that high-level duration is divided by low-level duration in a cycle. From top to bottom, the duty cycle of first square wave is 0% and its corresponding value is 0. The LED brightness is lowest, that is, light off. The more time the high level lasts, the brighter the LED.

Therefore, the last duty cycle is 100%, which correspond to 255, and LED is the brightest. And 25% means darker. PWM mostly is used for adjusting the LED’s brightness or the rotation speed of motors or the frequency of passive buzzer.

Beats are the time delay for each note. The larger the number, the longer the delay time. A note without a line in the spectrum is a beat, with a delay of 1000 milliseconds. while a beat with an underline is 1/2 of a beat without a line, and a beat with two underlines is 1/4 of a beat without a line.

**Preparation:**
Slide the Bluetooth switch under the yellow robot to OFF end
Interface the yellow robot with a computer via a USB cable.
**Test Code1：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)
![](media/93708f3fbe79935c1e24bd63ab3b3e9d.png)
![](media/c0a0b403e4b11568ec7e352295208030.png)
![](media/9c8f9be71ed60cbfd6a1b37c47227cd1.png)

Complete Program

![](media/Project_02.1.png)

**Project Result1**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, you will hear the sound of“do re mi fa so la si”

**Test Code2：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)
![](media/93708f3fbe79935c1e24bd63ab3b3e9d.png)
![](media/c0a0b403e4b11568ec7e352295208030.png)
![](media/6750fb9c4ae5fba7b9ceb533407d6d82.png)

Complete Program

![](media/Project_02.2.png)

**Project Result2**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, you will hear the Ode to Joy song.

### Project 03: Birthday Gift

**Introduction：**

Under the weak light，the yellow robot will play a birthday song and blink its LED; however, it won’t play music and blink its LED under the strong light. Light and music can vary with light intensity! In this project, we particularly introduce the photoresistor module.

**Photoresistor**

This photoresistor sensor integrates the LEGO building block and Easy Plug port, which can be fixed on the yellow robot flexibly. Only a blue cable needed can interface it with the yellow robot. You are free from worries over reversely wire up or damaging the module

This sensor is most sensitive to ambient light, generally used to detect the brightness of the ambient light and trigger a single-chip or relay module, etc.

It mainly uses photoresistive elements and changes with light intensity. Under the strong light, the resistance is 5-10KΩ; if there is no bright light, the resistance is 0.2MΩ.

**Parameter：**

![](media/fcd9fffd592fd952375db696d1aeee05.jpeg)
![](media/06ad902028d4fdf25883486ce4252b07.png)

Port：EASY plug

Working Voltage：DC 5V

Output Signal：Analog signal

**Components：**

| Kidsbits Yellow  Robot \*1                               | Kidsbits Building Block LED Module \*1          | Kidsbits Building Block Photoresistor\*1        |
|----------------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| ![kd0003-2](media/40ca723ac5698b2b59c9c415aef89f8f.jpeg) | ![](media/cc330414cc7dee613007b751555953ee.png) | ![](media/eae591de59355445eb68491c110aa6c1.png) |

When the ambient light is weak, LED will flash and the yellow robot will play songs.

When the ambient light is strong, LED will be off and the robot won’t play music.

And we need to detect the ambient light firstly. According to the detected result, the light intensity value is between 700 and 750. Then we will continue to measure.

When light intensity is between 700 and 750. When covering the photoresistor, the detected value gets small. If the value is less than 700, robot will play music.

If you the intensity is not less than 700, LED will be off and robot won’t play music.

**Connection Diagram：**

Note: the LED module is interfaced with D12 and the photoresistor module is connected to A6 port.

![](media/b5632a4821f384ff65bb98af09a96f0b.png)

**Preparation:**
Slide the Bluetooth switch under the yellow robot to OFF end
Interface the yellow robot with a computer via a USB cable.
**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)
![](media/640f47c65d193c1bfd6dd0a8673c276a.png)
![](media/91f4787c281aca64ce664097b41cf432.png)
![](media/de51b0e9f6b35c1ab9c1a81ee93e56bd.png)
![](media/a747c8575feb0abaac2e311a73909b6e.png)

Complete Program

![](media/Project_03.png)


**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, the robot will blink its LED and play song; however, under the strong light, it won’t take a reaction.

### Project 04: Distance Detector

![](media/d21b657a9955f07694d9a0f7ff5f6dcb.png)

**Description：**

You may find that when we reverse a car, the alarm system will be triggered if the car is going to hit the obstacle behind. This is because the car has installed a safety device, the reversing radar which can detect the distance between the car and objects behind.

In this lesson, we will learn how to make such a distance measuring device with an ultrasonic sensor and a buzzer. Since we have illustrated buzzer in previous project, here we will focus on the ultrasonic sensor.

**Ultrasonic Module**

![](media/cf2feaa59a3565c77f1dbf59e7b26c3e.png)

An ultrasonic sensor uses a sonar to determine the distance from the object like what bats do. And it boasts a complete transmitting module and a receiving module.

Thus it can provide a non-contact distance measurement with high accuracy and stable readings.

Ultrasonic sensors have found wide applications in all sorts of electronic projects, such as obstacle detection and distance measurement. This project will concentrate on how to use the ultrasonic sensor to detect distance.

**Working principle：**

![](media/8b930c8502ccd8f0e6eeefaf947771fa.jpeg)

The ultrasonic sensor is shaped like two eyes, of which one serves as the transmitting end and the other the receiving end.

It detects the time (t) gap between emitting signals and receiving them. And the propagation speed of sound in the air is about 343m/s, and distance = speed \* time. However, the ultrasonic wave emits and comes back, which is 2 times of distance. Therefore, it needs to be divided by 2, the distance measured by ultrasonic wave = (speed \* time)/2.

Usage and timing chart of ultrasonic module:
Setting the delay time of Trig pin of SR04 to 10μs at least, which can trigger it to detect distance.
After triggering, the module will automatically send eight 40KHz ultrasonic pulses and detect whether there is a signal return. This step will be completed automatically by the module.
If the signal returns, the Echo pin will output a high level, and the duration of the high level is the time from the transmission of the ultrasonic wave to the return.

![](media/ba43be6007d9fe3aab0bb609868af640.png) 


**Parameters：**

Power supply: +5V DC

Quiescent current: \<2mA

Working current: 15mA

Effective angle: \<15°

Measuring distance: 2 cm to 40 cm

Resolution: 0.3 cm

Measuring angle: 30 degrees

Trigger input pulse width: 10uS

**Preparations**

A.Turn the Bluetooth dial switch to OFF .

B.Connect the yellow car and the computer via a USB cable.

**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)
![](media/2c25f7e521cfb8fea325d3ab9809c512.png)
![](media/4c149fdbf3530ccf31ad622a97a4fd4a.png)
![](media/f42954bfc5f45523095f567c038c37ba.png)
![](media/e4cda0ef487f70ba018ba47f5fa4f185.png)
![](media/83a21b308a1629a8402fcf36faaf58e0.png)

Complete Program 
![](media/Project_04.png)


**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, the yellow robot will emit“tick,tick”when detecting the obstacle away from 0cm to 8cm.

![](media/6db207f9af332d566c628c8e577bd1f4.png)

### Project 05: Button Counter

![](media/c83e32f45408be749fbba4aea8f049ba.png)

**Description：**

In daily life, we usually need to count numbers. In this project, we will make a button counter.

**Button Module：**

This button module integrates the LEGO building block and Easy Plug port, which can be fixed on the yellow robot flexibly. Only a blue cable needed can interface it with the yellow robot. You are free from worries over reversely wire up or damaging the module

When we press it, low level signals will be output; when it is released, high level signals will be output

**Parameter：**

Interface: EASY plug

Working voltage: DC 5V

Output signal: digital signal

![](media/0e92adeeb838d527a40def66740eb61b.jpeg)

**Connection Diagram：**

Use the blue cable to connect the button module to D12 port of the yellow robot

![](media/54d61a3d322b1df3623f4fab3604ca33.png)

**Preparation：**

Slide the BT switch to OFF end

Connect the yellow robot to the computer by a USB cable

Connect the button module to D12 through a blue cable

**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)
![](media/b7b367574fa01d45ab55604a02fb76fb.png)
![](media/ecd256a78e788d245517b148cb4325bf.png)
![](media/e4cda0ef487f70ba018ba47f5fa4f185.png)
![](media/fd28f67572a98f0054ce2e4bfaae472f.png)
![](media/f42954bfc5f45523095f567c038c37ba.png)

Complete Program

![](media/Project_05.png)

**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, then tap ![](media/fb11e1472597795add579dc167740fce.png) to set the baud rate to 9600，and press the button. You will see the data as follows:

![](media/ca9d2577c5d66ebf81bbb3effc97e1fe.png)

**Code Explanation:**

When you press or release button, different digital signals will be output due to the shaking of the button. To eliminate shaking, we need to delay time. In this chapter, we delay in 10ms.

### Project 06: Motor

**Introduction:**

![](media/b550f1ca473d1702b670b3ca7895f192.jpeg)

DC reduction motor, also called gear reduction motor, is developed on the ordinary DC motor. It has a matching gear reduction box which provides a lower speed but a larger torque. Furthermore, different reduction ratios of the box can provide different speeds and torques.

**Parameters:**

Rated voltage: 6.0V DC

Operating voltage: 1.0V \~ 6.0V DC

Rated load: torque plate load 0.5kg-cm

Rotation direction: clockwise or counterclockwise when viewed from the shaft extension

Motor posture: all directions of output shaft

Operating temperature: -10℃\~+60℃

Storage temperature: -20℃\~+85℃

**Description of chip:**

![](media/df53587ba30d018f86045e7a6dadc7ec.png)![图片1(5)](media/4599e4e126b28b35a6442d70b3bff407.jpeg)

A motor driver is a chip integrated with CMOS control circuit and power DMOS device. It can be used to form a complete motion control system with the main processor, motor and incremental encoder. It can be applied to drive inductive loads such as DC motors, stepping motors and relays. What’s more, it can control the DC reduction motor to rotate clockwise or anticlockwise.

The yellow car introduced in this course uses the TB6612FNG motor drive chip, which is a device driving DC motors. Compared with the traditional L298N, the module has a much higher efficiency and a significant reduction in size. Within the rated range, the chip basically does not generate heat.

It has a high-current MOSFET-H bridge structure and dual-channel circuit output, so it can drive 2 motors at the same time. TB6612FNG can output continuous drive current up to 1.2 A per channel, and it boasts four motor control modes: rotate clockwise, rotate anticlockwise, brake and stop.

**Working Principle**

The DC reduction motor on the left side of the yellow car has two pins which are connected to the digital pin 8 and pin 9 (a PMW pin)controlling the rotation direction and the speed respectively.(This PMW pin can not only output high and low level stably but make constant changes in high and low levels within a given time so as to control the speed of the motor. It can output values from 0-255 of which 255 represents high level while 0 implies low level.)

| Its Left Wheel |                      |                      |
|----------------|----------------------|----------------------|
| Digital Pin 8  | Digital Pin 9（PWM） | DC Reduction Motor   |
| Low Level      | 0                    | Stop                 |
| Low Level      | 200                  | Rotate anticlockwise |
| High Level     | 200                  | Rotate clockwise     |
| High Level     | 0                    | Stop                 |

The DC reduction motor on the right side of the car also has two pins, one of which is connected to the analog pin A1 (also the digital pin 15) to control directions and the other is linked with digital pin 10 to adjust speed. Please note that analog pins can function like digital pins while digital pins can not be taken as analog ones.

| Its Right Wheel |                       |                      |
|-----------------|-----------------------|----------------------|
| Digital Pin A1  | Digital Pin 10（PWM） | DC Reduction Motor   |
| Low Level       | 0                     | Stop                 |
| Low Level       | 200                   | Rotate clockwise     |
| High Level      | 200                   | Rotate anticlockwise |
| High Level      | 0                     | Stop                 |

**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)
![](media/ea25ce69829473a40424c68b662bc61d.png)

![](media/d67b570cbcbb7da761bca44989700b57.png)

![](media/3dac335a1f86e46c995ee1c8b96e6509.png)

Complete Program

Theoretically, the PWM values of the left and right motors are the same, however, to make the yellow car go straight, sometimes the values of the motors are slightly different due to the hardware of the motors.

![](media/project_06.png)


**Project Result**

Slide the Bluetooth switch to OFF end,,click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, slide the power switch to ON end. The car will move forward in 3s, then go backwards in 3s, stop in 3s, and turn left in 3s and then right in 3s and repeat this pattern.

### Project 07: 8*8 Dot Matrix Dispaly

![](media/7a0a21f6196faf5853cf2b3ce12e1bbd.png)

**Description：**

We add an LED panel displaying numerous pictures to a robot. In fact, this panel is called 8\*8 dot matrix display. It comes with 64 LEDs, of which can be lit separately or together. Different lit areas can foster distinct pictures.

**8\*8 Dot Matrix:**

**![IMG_256](media/1bf7d5e8aad5a25b02212d6c20ac17a8.jpeg)**

Composed of LED emitting tube diodes, LED dot matrix are applied widely to public information display like advertisement screen and bulletin board, by controlling LED to show words, pictures and videos, etc.

Divided into single-color, double-color, and three-color lights according to emitting color , LED dot matrix could show red, yellow, green and even true color.

There are different types of matrices, including 4×4, 8×8 and 16×16 and etc.

The 8×8 dot matrix contains 64 LEDs.

The inner structure of 8×8 dot matrix is shown below.

![图片4](media/df08c3a7c84497e429ce6fde7253d9b3.jpeg)

Every LED is installed on the cross point of row line and column line. When the voltage on a row line increases, and the voltage on the column line reduces, the LED on the cross point will light up. 8×8 dot matrix has 16 pins. Put the silk-screened side down and the numbers are 1,8, 9 and 16 in anticlockwise order as marked below.

![IMG_258](media/6576aff8e8a7fb35335629c2f60de29b.jpeg)

The definition inner pins are shown below:

![图片3](media/4b98c449bae6648d7719a58d9ab2efa7.jpeg)

For instance, to light up the LED on row 1 and column 1, you should increase the voltage of pin 9 and reduce the voltage of pin 13.

**HT16K33 8X8 Dot Matrix**

The HT16K33 is a memory mapping and multi-purpose LED controller driver. The max. Display segment numbers in the device is 128 patterns (16 segments and 8 commons) with a 13\*3 (MAX.) matrix key scan circuit. The software configuration features of the HT16K33 makes it suitable for multiple LED applications including LED modules and display subsystems. The HT16K33 is compatible with most microcontrollers and communicates via a two-line bidirectional I2C-bus.

The picture below is the working schematic of HT16K33 chip

![](media/fa5b7bd0d5ce98dbd4cb392dfb0b95e7.png)

We design the drive module of 8\*8 dot matrix based on the above principle. We could control the dot matrix by I2C communication and two pins of microcontroller, according to the above diagram.

**Specification of 8\*8 dot matrix**

Input voltage: 5V

Rated input frequency: 400KHZ

Input power: 2.5W

Input current: 500mA

**Preparation:**

Slide the BT switch to OFF end

Connect the yellow robot to the computer by a USB cable

**Test Code1：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)
![](media/4cca1417dc7111012cc99686d1f77932.png)
![](media/c7380a844e3046855ae95407748cf7c7.png)

Complete Program

![](media/Project_07.1.png)

**Project Result1**

Click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, the yellow robot displays smile image

**Test Code2：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

（1）![](media/00ef8800dc7df31b1dfa62b0e69bf4eb.png)

（2）![](media/4cca1417dc7111012cc99686d1f77932.png)

（3）![](media/1d7759b944c1af0923891c6b39702faf.png)

Complete Program

![](media/Project_07.2.png)


**Project Result2**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, the yellow robot will show arrow up,down, leftward and rightward and ❤ image, circularly.

### Project 08: Obstacle Avoidance Robot

![](media/221bab57cc5a0e56499bb91bf96f063c.png)

**Description：**

We have learned about distance detection and motor drive. In this lesson, we combine them together. In fact, we only need to change a test code to convert the car into an obstacle avoidance car.

| detection       | Distance away from the left obstacle  | Distance1（unit：cm） |
|-----------------|---------------------------------------|-----------------------|
|                 | Distance away from the right obstacle | Distance2（unit：cm） |
|                 | Distance away from the front obstacle | distance（unit：cm）  |
| Condition       | Status                                |                       |
| 0\<distance\<15 | distance1\> distance2                 | Turn left             |
|                 | distance1\<=distance2                 | Turn right            |
| distance\>=15   | Go forward                            |                       |

**Preparation:**

Slide the BT switch to OFF end

Connect the yellow robot to the computer by a USB cable

**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Pin Trig (trigger signal input) and pin Echo are connected to digital 2 and 3 of the yellow robot.

![](media/Project_08.png)



**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully,slide the power switch to ON end. If the obstacle distance is more than and equal to 15cm, the car will go forward. If less than 15cm, the car will stop and play "tick,tick" sound. If the left obstacle distance is greater than the right distance, the car will turn left. On the contrary, it will turn right.

### Project 09: Line Tracking Smart Car

![](media/d54bce7b6fd3072f496d3b1c2ee367ed.png)

**Description**

The previous projects are inclusive of the knowledge of multiple sensors and modules. Next, we will work on a little challenging task.

Based on the working principle of the line tracking sensor we could make a line tracking car.

The tracking sensor is actually an infrared sensor. Its working principle is to convert the intensity of the reflected signal into a current signal. During the detection process, black color is active at high level and white is active at low level. Its detection height is 0- 1cm. In the project, we detect the status of the tracking sensor, then analyze and compare the data obtained, and then control the rotation of the two sets of motors according to certain logic, so as to control the yellow robot.

**Flow Chart：**

| Detection                                                               | Left tracking sensor        | detects black line：LOW  |
|-------------------------------------------------------------------------|-----------------------------|--------------------------|
|                                                                         |                             | detects white line：HIGH |
|                                                                         | Right tracking sensor       | detects black line：LOW  |
|                                                                         |                             | detects white line：HIGH |
| Condition                                                               | Status                      |                          |
| Two sensors detect black line                                           | Go forward                  |                          |
| Left sensor detects white line and right one detects the black line     | Turn right (set PWM to 100) |                          |
| left sensor detects the black line and the right one detects white line | Turn left (set PWM to100)   |                          |
| Two sensors don’t black line                                            | Stop                        |                          |

**Preparation**

Slide the BT switch to OFF end

Connect the yellow robot to the computer by a USB cable

**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Theoretically, the PWM values of the left and right motors are the same, both of which are 100. However, due to the hardware of the motors, to make the yellow car run stably, the values of the left and right motors are slightly different according to the actual situation.

![](media/Project_09.png)



**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, slide the power switch to ON end. Then the yellow robot will follow the black line.

### Project 10: Magical Pattern

![](media/4f3a982d0aab3ee19939999057c92d21.png)

**Description：**

We’ve introduced how to use the LED dot matrix and change pictures. In this project, we will make dot matrix show different images through a PIR motion sensor.

**PIR Motion Sensor：**

This PIR motion sensor integrates the LEGO building block and Easy Plug port, which can be fixed on the yellow robot flexibly. Only a blue cable needed can interface it with the yellow robot. You are free from worries over reversely wire up or damaging the module.

It can detect infrared signals of people or animals in motion, and output switch signals. It also is highly sensitive and reliable with ultra-low power consumption and ultra-low voltage working mode.

Additionally it can be applied to various automatic induction electrical equipment, especially automatic control products powered by dry batteries.

**Parameter:**

![](media/53843b7f6bc29627be019e4cf88f75bb.png)

Interface: EASY plug

Working voltage: DC 3.3V\~5V

Working current: 15 uA

Output signal: digital signal

Output delay time (high level): about 2.3 \~ 3 seconds

Detection range: 0\~50cm

Detection angle: 100º.

**Special note：**

1\. When testing, first open the white lens, you can see the rectangular sensing part. When the long line of the rectangular sensing part is parallel to the ground, the distance is the best.

2\. When testing, the sensor needs to be covered with white lens, otherwise it will affect the distance.

3\. The distance is best at 25℃, and the detection distance is shortened when it exceeds 30℃.

4\. Done powering up and uploading the code, you need to wait 5-10 seconds then start testing, otherwise it is not sensitive.

![IMG_20190801_133645](media/14aecf51f85da3da15897d7743980bdc.jpeg)

**Connection Diagram：**

Connect the PIR motion sensor to D12 of the yellow robot

![](media/c259462c6ea55883affcc7632d0eda42.png)

**Preparation**

Slide the BT switch to OFF end

Connect the yellow robot to the computer by a USB cable

Connect the PIR motion sensor to D12 of the yellow robot

**Test Code：**

Turn off the Bluetooth switch before uploading the code.

![](media/Project_10.png)



**Project Result**

Click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully,the yellow robot will display multiple patterns when detecting people around. If nobody is nearby, it will convert from a big square into a smaller one, circularly.

### Project 11: Sound-controlled Smart Car

**Description**

In this project，we will make a yellow robot perform sound control function through sound sensor and ultrasonic sensor inside.

![144(2)](media/65a1c1055a2c5f96837006602dc1e70b.jpeg)

**Sound Sensor**

The sound sensor is a sensor that converts sound signals into electrical signals. It can be used to make sound-activated robots, sound-activated switches, sound-activated alarms, etc., according to the effect of interacting with the sound.

![](media/ff04840fecf337e911e65cc314f0b943.png)

There is a very thin film in the sensor. When sound or air blows it,

the sound wave or airflow passes through, the film will vibrate continuously and generate an electrical signal, which is transmitted to the coding robot. (Arduino Uno)

The sound intensity detected can be converted to any value between 0\~1023. The Trig pin of the ultrasonic sensor is connected to digital 2 and Echo pin is connected to digital 3. The sound sensor is interfaced with analog A0, SDA and SCL pin of dot matrix display is attached to analog A4 and A5. The pin controls direction on the left DC geared motor is connected to digital 8 and its pin controlling speed is interfaced with digital 9.

The pin controlling direction on the right DC motor is attached to A1(digital 15) and the pin controlling speed is interfaced with digital 10.

**Preparation**

Slide the BT switch to OFF end

Connect the yellow robot to the computer by a USB cable

**Test Code**

Turn off the Bluetooth switch before uploading the code.

Note: Fully charge the yellow robot if you continue further experiments. Clap your hands or make sounds with 5cm away from sound sensor.

![](media/Project_11.png)



**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully, slide the power switch to ON end. When the sound intensity is more than 150, the yellow robot will activate obstacle avoidance; when the sound intensity is less than 150, the robot will stop.

### Project 12: Bluetooth Knowledge

**Description：**

Bluetooth wireless communication module has spread over in electronic sector. The Bluetooth standard has upgraded continuously so as to meet the needs of customers and technology.

Over the years, data transfer rates, power consumption of wearable devices and IoT devices, and security systems have promoted.

**Parameter：**

Working distance: In an open environment, achieve 30\~50cm ultra-long-distance communication.

Working frequency: 2.4GHz ISM band

Modulation method: GFSK (Gaussian Frequency Shift Keying)

Transmission power: -23dbm, -6dbm, 0dbm, 6dbm, which can be modified by AT command

Sensitivity: ≤-84dBm at 0.1%BER

Transmission rate: 6K bytes

Security features: authentication and encryption

Support services: central and peripheral UUID FFE0, FFE1

Power consumption: automatic sleep mode

Standby current 400uA\~800uA, 8.5mA during transmission

Power supply: 5V DC

Operating temperature: -5 to +50 degrees Celsius

**Preparation:**
-   Slide the BT switch to OFF end.
-   Connect the yellow robot to the computer by a USB cable
**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/94ac9fababc8db6a83ac0f359b8923e1.png)
![](media/6ae41b23df84d1c7ce258ec976ac2741.png)
![](media/edd0d2a9e88f17d20f7b64fd773eb74f.png)
![](media/09308226348ef865100bc3b4ff30cb5c.png)

Look for Code Blocks

![](media/Project_12.png)

**Download APP：**

iOS system

Enter **App store** and search **Coding Robot**

![IMG_0516(1)](media/59c355c3a96942af4e04b6dba5d0e3c9.jpeg)

Download and open it.

![IMG_0517](media/d29c7f857e56e1d3879fd935164152f5.jpeg)

![IMG_256](media/84e7a6cf23ae9ab3c5b876e54e25ed74.png)

Coding Robot App:

![](media/fdf42035e129bc24021cb27381d0edcb.png)

**Android System：**

Enter the following link to download App：

<https://play.google.com/store/apps/details?id=com.keyestudio.codingrobot>

**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully. Tap ![](media/fb11e1472597795add579dc167740fce.png) to set the baud rate to 9600, then slide the Bluetooth switch and the power switch to ON end.

Click“Connect”to pair with Bluetooth. Then ![](media/e3357031fa71d389fbcd3fe0766b301d.png) will pop up. Tap“Connect”again to connect to Bluetooth.

Click each pattern button on the APP and wait for the command from cellphone, As shown below:

![](media/2c314a9ef1bd83f6da74781051886c65.png)

### Project 13: Bluetooth Remote Control

**Description：**

We’ve learned the basic knowledge of Bluetooth. In this lesson, we will use APP and Bluetooth to control the LED on and off.

In this experiment, we default the HM-10 Bluetooth module as a Slave and the cellphone as a Host.

And we also need to install an App to control this yellow robot.

**Functions of App icons:**

| ![](media/48aa4aeaa4494f2ec757416cfdd4fc9b.png) | Pairing Bluetooth                                                  |                                                                                                                                               |
|----------------------------------------------------------------------------------|--------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------|
| ![](media/48aa4aeaa4494f2ec757416cfdd4fc9b.png) | Enter Bluetooth control interface                                  |                                                                                                                                               |
| ![](media/48aa4aeaa4494f2ec757416cfdd4fc9b.png) | Disconnect Bluetooth                                               |                                                                                                                                               |
| ![](media/c3a35e7f8a877400cbb1ed348bfbe521.png)                                  | Press it to output F； Release it to output S                      | Go forward Stop                                                                                                                               |
| ![](media/e6ab1ec1ab00c8d455e109459d62e08d.png)                                  | Press it to output B； Release it to output S                      | Go back Stop                                                                                                                                  |
| ![](media/007efc69de26b29bd194d4834b5eb5b5.png)                                  | Press it to output L； Release it to output S                      | Turn left Stop                                                                                                                                |
| ![](media/7f9b50b3ae3c5a1b505ab14bd0d25576.png)                                  | Press it to output R； Release it to output S                      | Turn right Stop                                                                                                                               |
| ![](media/a36a60c1684cc35676bb7497a8952fbe.png)                                  | Press it to output S； Release it to output S                      | End functions                                                                                                                                 |
| ![](media/16fc779998163a1b08a8f974a37e294e.png)                                  | Press it to send Y Release it to send Y；                          | Sound -controlled function will be activated.                                                                                                 |
| ![](media/c4db79766a49c42936d50780e87dab34.png)                                  | "Waiting" label on the top left corner changes into beating bytes | Beating bytes means starting  device.  |
| ![](media/b9df3b109b1f3320f55e41bd524d9c9d.png)                                  | Press it to output X； Release it to send X；                      | Start line tracking function；<br>click![](media/a36a60c1684cc35676bb7497a8952fbe.png)to end                                       |
| ![](media/ec6907df814b313aea2bfdeba9228b2d.png)                                  | Press it to output U； Release it to send U；                      | Start following function；<br>click![](media/a36a60c1684cc35676bb7497a8952fbe.png)to end                                             |
| ![](media/e78a49ee30ff13f73ae960b627d99797.png)                                  |                                                                    | ![](media/24c63c1f750c5ec89545fa768407f549.png)                                                                                               |
|                                                                                  | ![](media/80d740fbf23de7f477eb0bac840d62f7.png)                    | Press it to emit “do1”， Release it to send S                                                                                                 |
|                                                                                  | ![](media/0dcd5a1acf80498afb4129602f9a05a1.png)                    | Press it to emit“re1”， Release it to send S                                                                                                  |
|                                                                                  | ![](media/b2eba0299efa644da1d631cceee90ea7.png)                    | Press it to emit“mi1”， Release it to send S                                                                                                  |
|                                                                                  | ![](media/1c34dfbe2cdd674a945d81eb4dccecde.png)                    | Press it to emit“fa1”， Release it to send S                                                                                                  |
|                                                                                  | ![](media/6ea033e698bba3db78722baa0d88c32e.png)                    | Press it to emit “so”， Release it to send S                                                                                                  |
|                                                                                  | ![](media/1eafff05559eecf07635f3c0fe41bdd2.png)                    | Press it to emit “la”， Release it to send S                                                                                                  |
|                                                                                  | ![](media/27690344ffe3a8a5ebf9c0c552b14017.png)                    | Press it to emit“si”， Release it to send S                                                                                                   |
|                                                                                  | ![](media/cf5c71672f60929920da44531efb1cec.png)                    | Press it to emit“do2”， Release it to send S                                                                                                  |
|                                                                                  | ![](media/d23863965ef99b1ca82da233ed2f381e.png)                    | Press it to emit“re2”， Release it to send S                                                                                                  |
|                                                                                  | ![](media/6bccd2b4c470ec54d3836e45292ebefb.png)                    | Press it to emit “mi2”， Release it to send S                                                                                                 |
|                                                                                  | ![](media/88cfdfc592c5bf261511c1e6489608dc.png)                    | Press it to emit“fa2”， Release it to send S                                                                                                  |
|                                                                                  | ![](media/da8d6bc1d838fba43b5e192a103798ae.png)                    | Send P，buzzer will play music                                                                                                                |
|                                                                                  | ![](media/18e9bfb4d64f069525c193b28efd8fc6.png)                    | Press HMSoft to return the main page                                                                                                          |

**Preparation**

（1）Slide the BT switch to OFF end.

（2）Connect the yellow robot to the computer by a USB cable

（3）We can connect an LED to the yellow robot and control the LED via App，As shown below, we connect the LED module to the digital port 12(D12)

![](media/7bea021ddac4afa931456ad99ed48d03.png)

**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Look for Code Blocks

You can drag blocks to edit. Blocks listed below are for your reference

![](media/94ac9fababc8db6a83ac0f359b8923e1.png)
![](media/6ae41b23df84d1c7ce258ec976ac2741.png)
![](media/edd0d2a9e88f17d20f7b64fd773eb74f.png)
![](media/1a7cd0949667746b7382df03e7e79593.png)
![](media/d55eb42b51e1316ace75540903bd42b9.png)
![](media/c7684c160788ca6a064455a4ca3c42d5.png)

Complete Program

![](media/Project_13.png)

**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully. Tap ![](media/fb11e1472597795add579dc167740fce.png) to set the baud rate to 9600，then slide the Bluetooth switch and power switch under the yellow car to the ON end.

Click“Connect”to pair with Bluetooth. Then ![](media/e3357031fa71d389fbcd3fe0766b301d.png) will pop up. Tap“Connect”again to connect to Bluetooth.

click ![](media/39800a856d2074f9b4ca40cb2df69107.png)on App to control the LED on and off，As shown below:

![](media/2b36c101a7ea7b185a826a48a59553e2.png)

### Project 14: Bluetooth Robot Car

**Description：**

In this project, we will control the yellow robot via App. You can make it perform all functions

**Flow Chart：**
**Preparation:**

Slide the BT switch to OFF end

Connect the yellow robot to the computer with a USB cable.

**Test Code：**

Turn off the Bluetooth switch before uploading the code.

Complete Program

![](media/Project_14.png)

**Project Result**

Slide the Bluetooth switch to OFF end, click![](media/7d0dd11d1d0571b13ca0f647398d49d7.png)to upload the code to the yellow robot successfully. Then slide the Bluetooth switch and the power switch under the yellow car to the ON end and match the Bluetooth, you can control this robot through the App.

**Code Explanation**

Characters can be converted to numbers through the ASCII code.

Here are the numbers and characters on the keyboard that correspond to the ASCII code.

![图片1 (2)](media/069aa6b902a1f852360ea9b70e17d369.png)

![](media/df02b08bbaeec371f1ab65131cf96de8.png)The ASCII value 49 here is the character '1'；![](media/f8115ec805bfd6aa6aab3cbd00dc8c35.png)The ASCII value 50 is the character‘2’.
