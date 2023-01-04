The FSM I will pick is a vending machine. In which the 4 states are sold-out, idle, processing, and sold.
![FSM-1](https://user-images.githubusercontent.com/114371901/210545894-aaffd16e-88a7-4982-bece-36d3149981f1.jpg)

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
-Move to sold (11)

Whereas for sold state, there are 3 outputs:
-Return to idle (00)
-Stay in sold (01, 10)
-Move to sold out (11)

Finally, in sold out state, there are only 2 outputs:
-Stay in sold out (01, 10, 11)
-Return to idle (00)

The following is the state and transition table:
![S^0T Table Project-1](https://user-images.githubusercontent.com/114371901/210557218-a39335d1-4dbc-4a1e-8bd3-814b6aedaf17.jpg)

Based on the table above:
The first column represents the min terms from M0 to M15.

The second column represents the inputs to the FSM, where each bit is labeled as A and B from left to right.

The third column represents the current states of the FSM, in which each bit is labeled as C and D fromn left to right.

The fourth column represents the next states of the FSM if the current state is given an input.

The fifth column represents the output, obtained from its next states. (Labeled as X1 and X2)

Moving on to the K-map, the map will have 2 versions. One is for each output bit for X1, and the other for X2.

Here is the K-map for X1:
![Kmap X1-1 drawn](https://user-images.githubusercontent.com/114371901/210565276-a7e720a0-4bdd-48c8-b1e9-ecc529ea3c1c.jpg)

The combinational boolean equation for X1 is:
X1 = A + C

Here is the K-map for X2:
![Kmap X2-1](https://user-images.githubusercontent.com/114371901/210564364-e53c754e-b844-4cfe-8a82-410b30638117.jpg)
