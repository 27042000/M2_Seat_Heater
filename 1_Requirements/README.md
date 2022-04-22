
# Test Plan
### Table no: High Level test plan
| Test ID | Description |  I/P|  O/P|
| --- | --- | --- | ---- | 
| H_01 |  When both the Switches are open |Switch close|  Led Blink |
| H_02| (USART) communication transfer the data| 22  | 22 |
| H_03 | Potentiometer is at mid volt|3.3v   |29|
| H_04|Change in Potentiometer|5v| 33 degree| 


### Table no : Low Level test plan
| Test ID | Description | I/P|  O/P|
| --- | --- | --- | ---- |
| L_01 |  When only one switch is closer |1 switch is only closed| Led not blink|
| L_02| When Potentiometer is set at 0|0v |0 degree|
