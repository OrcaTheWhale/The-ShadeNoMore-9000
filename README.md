# The ShadeNoMore 9000

The ShdeNoMore 9000 is a product designed to make being lazy look cool. Featuring IR receivers like the ones in TV's, you can close and open your curtains using a remote! It's designed to be a household item, featuring common AA batteries. It's also designed in a way where you can put two halves of a design onto each slider piece, and when the product fully closes, it'll connect together and make the piece whole!



Why I made this project:
I wanted to create a household item using a low power microcontroller, and accessible in the way of replacing batteries. Normal people wouldn't have like 3.7V or 7.4V or the sorts of batteries around them, so the project is designed around AA batteries, which are common.

I also made this project because of one thing: The design connection concept. On the sliders, there is clips where you can put two halves of 3D prints or anything like that, and when the curtain fully closes, it'll make the piece whole through the two sliders. That is why the PCB and the remote is and has a design of a Yin and Yang(The PCB technically won't actually match up if you flip the board, but whatever it looks cool). 


How to use it:

**IMPORTANT: The rightside PCB has the IR Receiver soldered onto the BACKSIDE of the PCB, not the front.**

**Your curtain rod MUST be a circle and have a diameter of 1.5cm with the files/CAD provided. If it is a different value, you may adjust sizes accordingly. If your curtain rod is longer or shorter than usual, you can just change the firmware value or change the linkage length.**

Base: Attach both on the rail. The hole tolerance is meant to be tight so it doens't move. Put servo motor in its cubby first. Then, attach the PCB, and the buck converter. Then, slide the servo right fully, and attach the horn on the _outside_ of the base. Then, screw in the servo mount into its respective hole. Put the battery in its cubby and attach the base cover. Repeat for the other base, but mirror the direction, so that the servo horn faces the other way than the previous.

Attach a base on left side of the curtain rod. Make sure the curtain is **open.** Also make sure the base you're attaching has the hole on the servo side. Then, put the sliders in between the innermost curtain slot and the secondmost curtain slot. If that's not how your curtain works, you may attach a clip instead. 

For the right side, use the other base, the one with the hole on the PCB side.

**BOM**:

You may find the BOM here: [BOM.csv](https://github.com/OrcaTheWhale/The-ShadeNoMore-9000/blob/main/BOM.csv)

The prices are high for small parts due to the prices include shipping.

*Jumper Wires: Realistically, you SHOULD HAVE jumper wires of such short length, about 24-30 AWG.

The Machine Screws are in a kit because the kit has all the different lengths, and nuts needed. Buying each part individually would only increase unnecessary costs.




Schematic:
<img width="700" height="632" alt="image" src="https://github.com/user-attachments/assets/954adf55-7885-4081-b9c2-7e59a221e226" />

Remote Schematic:
<img width="324" height="151" alt="image" src="https://github.com/user-attachments/assets/69115dad-7be0-431c-acee-35c674c1ee3e" />

