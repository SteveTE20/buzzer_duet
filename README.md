# buzzer_duet
Play my jazz composition on Arudino Uno. Use it to control 2 tone buzzers independently, 1 for the bass and 1 for the melody (or just play both on 1 buzzer).

### Melody
* Pin8 -> Resistor(220Ω to 1kΩ) -> Buzzer1 (+), Buzzer1 (-) -> Arduino Uno GND

### Bass
* Pin9 -> Resistor(220Ω to 1kΩ) -> Buzzer2 (+), Buzzer2 (-) -> Arduino Uno GND

# Alternative setup for 1 buzzer
⚠️ Be careful with your wiring or else you may short circuit the pins! ⚠️

### Melody + Bass
* Pin8 -> Resistor(220Ω to 1kΩ) -> Buzzer (+)

* Pin9 -> Resistor(220Ω to 1kΩ) -> Buzzer (+)

* Buzzer (-) -> Arduino Uno GND
