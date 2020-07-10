# What is Adapt-FFB-Joy Direct Drive (for CH-FFX) #

Adapt-FFB-Joy _Direct Drive_ is a development branch of [Adapt-FFB-Joy](https://github.com/tloimu/adapt-ffb-joy) that interfaces L298N (or similar) H-Bridge for force feedback effects. The proof of concept is done by refitting a CH Products' Force FX into a fully functioning USB force feedback joystick. It bypasses the FFX's own IForce 1.0 serial-port protocol and hardware with AVR based solution for calculating and controlling the FFX's motors directly.

An L298N H-bridge module is connected between the Adapt-FFB-Joy and FFP's motors. The L298N is fed with 12V-35V external power brick. I'm using 12V brick now that nearly matches the specs of the FFP's own original power brick.

The firmware software project is configured to compile for ATmega32U4 with WinAVR-20100110 or newer version.

## What works
    - Seen by Windows and apps in it as a force feedback joystick without crashing or errors
    - Auto center spring effect. It also turns on and off as expected based on application on Windows' foreground.
    - Simple spring effect
    - Starting and stopping of the effect
    - The code architecture
    - The electronics
    - Constant force
    - Some periodic forces like sine and square
    - Device gain

## Next
    - Periodic forces like triangle and sawtooths
    - Ramp force
    - Effect envelope
    - Effect gain

## Open questions

    - Can AT90USB1286 (Teensy++ 2.0) handle it all or is there need for more memory or calculation power?

## Why
(from the original branch)
> The MIDI-like protocol in FFP was reverse engineered in Adapt-FFB-Joy project already. But not 100%. And it wasn't really reliable. Also, the FFP's own firmware didn't really implement it all. And some of the things it did implement, weren't really perfect. So, with this approach, the FFP can be made even better than the original was with still very modest investements and fair level complexity of building it yourself.
> Another reason is to provide a starting point for software for other force feedback joystick builders that have awesome hardware, but no software to run it with in Windows and in games especially.

From this starting point, we can make the CH Force FX leap 23 years into the future!

It & its IForce APIs never used USB, and predates the the DirectInput FFB API.

Misgivings between Immersion and Microsoft meant that software titles chose between IForce and DirectInput, the dInput titles being (relatively) newer games.

## Developing the code

The code is compiled from the **makefile** using **make**. Unit tests are done using Atmel Studio and are found in **test** subdirectory with more instructions for unit testing in the **readme.md** file there.
