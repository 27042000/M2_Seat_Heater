
# Test Plan
### Table no: High Level test plan
| Test ID | Description |  I/P|  O/P|
| --- | --- | --- | ---- | 
| H_01 |  When both the Switches are open |Switch close|  Led Blink |
| H_02| Universal Asynchronous Receiver Transmitter(USART) communication| data  | data |
| H_03 | Temperature value received by microcontroller||  Serial Monitor |Tempreature value|
| H_04|Change in Potentiometer|5v| 33 degree|


### Table no : Low Level test plan
| Test ID | Description | I/P|  O/P|
| --- | --- | --- | ---- |
| L_01 |  When only one switch is closer | switch one is closed| Led not blink|
| L_02| When Potentiometer is set at 0|0v |0 degree|
