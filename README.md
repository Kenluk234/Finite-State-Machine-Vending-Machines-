The FSM I will pick is a vending machine. In which the 4 states are sold-out, idle, processing, and sold.
![FSM-1](https://user-images.githubusercontent.com/114371901/210545128-b7312624-28fb-4b41-a1eb-e80be8564252.jpg)

As shown in the diagram, the 4 states are assigned to the following binary stateL:

00: Idle
01: Processing
10: Sold
11: Sold Out

During idle state, given 4 inputs, there are only 2 outputs, which are:
-Stay idle (00, 01, 10)
-Move to processing (11)

While in processing state, there are 4 outputs:
-Return to idle (00)
-Stay in processing state (01)
-Move to sold out (10)
