The FSM I will pick is a vending machine. In which the 4 states are sold-out, idle, processing, and sold.
![FSM Chart](https://user-images.githubusercontent.com/114371901/213169619-9252ad05-2a57-4787-a730-8cb6c0da3359.jpg)

As shown in the diagram, the 4 states are assigned to the following binary stateL:

00: Idle
01: Processing
10: Sold
11: Sold Out

During idle state, given 4 inputs, there are only 2 outputs, which are:
-Stay idle (00, 10, 11)
-Move to processing (01)

While in processing state, there are 4 outputs:
-Return to idle (00)
-Stay in processing state (01)
-Move to sold (10)
-Move to sold out (11)

Whereas for sold state, there are 3 outputs:
-Return to idle (00)
-Stay in sold (01, 10)
-Move to sold out (11)

Finally, in sold out state, there are only 2 outputs:
-Stay in sold out (01, 10, 11)
-Return to idle (00)

The following is the state and transition table:
![S T Table Cropped](https://user-images.githubusercontent.com/114371901/213169869-24e1e422-8e4d-4e99-8f9c-e32707b464b8.jpg)

Based on the table above:
The first column represents the min terms from M0 to M15.

The second column represents the current states to the FSM, where each bit is labeled as A and B from left to right.

The third column represents the inputs of the FSM, in which each bit is labeled as C and D fromn left to right.

The fourth column represents the next states of the FSM if the current state is given an input.

The fifth column represents the output, obtained from its next states. (Labeled as X1 and X2)

Moving on to the K-map, the map will have 2 versions. One is for each output bit for X1, and the other for X2.

Here is the K-map for X1:
![Kmap X1 Cropped   Drawn](https://user-images.githubusercontent.com/114371901/213155757-0e410d2f-4d3a-425a-b9c9-6a22d8795ac4.jpg)

The combinational boolean equation for X1 is:
X1 = AC + AD + BC

Here is the K-map for X2:
![Kmap X2 Cropped   Drawn](https://user-images.githubusercontent.com/114371901/212922756-380b65e2-4df7-442b-8f5d-33841ba41ad5.jpg)

