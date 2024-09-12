# OverLord

Lotus layout unified split with 2x mcus & 2x trackballs.

# Sponsorship

Thank you ![PCBWay](https://github.com/user-attachments/assets/6f3bc12d-9a62-42ca-8eee-fdd73b5ef344) for sponsoring. For all you PCB/PCBA needs, PCBWay is the way to go. Good quality and customer service.


# Detailed Summary

OverLord is a heavily modified version of Noraneko42L which has been blessed by darakuneko himself for the mod. Noraneko42L was originally designed by [darakuneko](https://github.com/darakuneko/Noraneko/tree/main/noraneko42l).

Entire PCB was designed using EasyEDA. I will upload a convert PCB file later. Be warn, the conversion might not be accurate and you might see a lot of DRC errors in KiCad but in EasyEDA it is ok since I have a working PCB right now.

Right now at the moment still working out the kinks of getting the 2nd trackball to scroll and the orientation for the main mouse trackball. All the keys are working properly.

A List Of Mods Made To The Original PCB file by darakuneko:

-Eliminate the extra 6th columns on each sides.

-Two square hole was created in the middle that can accomodate 2x 25mm trackballs powered by 2x PMW3360 sensors.

-Base of the trackball holders with lens cut out is integrated into the top case with integrated 5mm switch plate. Top case sits flush with pcb.

-Full keyboard case was created to house the PCB.

-OverLord is powered by 2x RP2040 Core - As which you can get from AE.

-Shout out to miketronic from Fingerpunch discord for helping me with the QMK coding from his [BR/KN](https://github.com/miketronic/brkn-keyboard) and modifing the matrix to fit my OverLord. No suppport will be given since I just copy and paste.

-Shout to Doesntfazer of KeyboardDweebs.net for proofing reading and sanity checking my PCB schematic.

-Special thanks to Doesntfazer for fixing my QMK pointing device settings and finally got the scrolling ball to work.

-Use M2 brass hot inserts 3.2mm diameter and 4mm length for the M2 screws to secure the case. I forgot how long is my M2 screws are but they should be greater than 10mm so estimated around 14.6mm. Play around with and buy multiple M2 lenght screws.

-"Eye of Sauron" icon logo embross on the top case was borrowed from [Symbolon from the Noun Project](https://thenounproject.com/icon/eye-of-sauron-1007756/). "Eye of Sauron" logo was used to give it a dark lord theme.

-Both RP2040 Core-A mcus will be "linked" together by header pin wires instead of TRRS connector.

# Production Pics
![IMG_2935](https://github.com/user-attachments/assets/1da241d4-54e2-401f-b791-bc9b68aad2a4)
![IMG_2934](https://github.com/user-attachments/assets/647acaec-8159-430f-b13a-d76f6e1fe1f6)
![IMG_2933](https://github.com/user-attachments/assets/c4356f1c-eaaf-44e8-ad73-be2031385a29)
![IMG_2932](https://github.com/user-attachments/assets/7aaf6300-788d-4f8f-a8ae-9dc21a8c248f)
![IMG_2925](https://github.com/user-attachments/assets/f2074fa6-50f8-43b0-bd2a-b366006c7960)
![IMG_2926](https://github.com/user-attachments/assets/5eb11ba6-ae19-4d4b-a194-34045df7f84a)
![IMG_2927](https://github.com/user-attachments/assets/12a6a1a3-c5bb-4e49-add8-b8f83245eb7f)
![IMG_2928](https://github.com/user-attachments/assets/2381b038-4e48-465b-936d-57c9c7905e73)
![IMG_2929](https://github.com/user-attachments/assets/0c5eb233-827a-4c14-9c21-08bf278f4b90)
![IMG_2930](https://github.com/user-attachments/assets/558dbc05-afa1-49bc-94e7-346e9ce1b917)
![IMG_2931](https://github.com/user-attachments/assets/d82417af-c64c-422a-bfb3-c41f0b6072d9)

# Test Fitting
![IMG_2707](https://github.com/user-attachments/assets/029263f2-cd57-474d-bc82-2caf53dad9ac)
![IMG_2706](https://github.com/user-attachments/assets/a9384805-8dea-4da3-90c1-0826b30a93cf)
![IMG_2705](https://github.com/user-attachments/assets/06e1bc89-0b4b-46f0-b3e3-8296902998e6)
![C9845A4F-E4CC-4C1D-95F6-BF27D2E29501](https://github.com/user-attachments/assets/a59a46ad-0cec-4963-8bf5-16d632aafb1a)
![case02](https://github.com/user-attachments/assets/41b77242-84e1-47c5-b268-4d8e64686faf)

# Renders

![Screenshot 2024-08-18 at 1 39 52 AM](https://github.com/user-attachments/assets/d226c8ea-a041-4107-967d-e291f5cce6a5)
![Screenshot 2024-08-18 at 1 40 03 AM](https://github.com/user-attachments/assets/c09dc3b3-35cf-40ec-8067-2123692cf95b)
![Screenshot 2024-08-01 at 8 59 47 PM](https://github.com/user-attachments/assets/22c92666-c021-4ffe-a35f-2ed77ccb87c3)
![Screenshot 2024-08-01 at 8 59 58 PM](https://github.com/user-attachments/assets/0ce3aff8-7f59-4940-824e-0c5b49a66487)
![Screenshot 2024-08-02 at 10 06 23 AM](https://github.com/user-attachments/assets/62f784b0-ee7d-405e-b139-8fa7f7711695)
![Screenshot 2024-08-02 at 10 06 38 AM](https://github.com/user-attachments/assets/b3ae3d2e-0daf-46f2-9845-2a7e8e2df206)
![Screenshot 2024-08-15 at 10 27 16 PM](https://github.com/user-attachments/assets/245341c7-bc2a-45bf-b4e2-53c78d1a7816)
![Screenshot 2024-08-15 at 10 27 04 PM](https://github.com/user-attachments/assets/c4c7ec3d-68b3-4fa5-9d3c-94c131aeae76)
![Screenshot 2024-08-15 at 10 26 42 PM](https://github.com/user-attachments/assets/718428db-7a09-4f6f-8711-cc589324a67d)
![Screenshot 2024-08-15 at 10 26 24 PM](https://github.com/user-attachments/assets/598c13d7-e2b4-4b3f-840b-34a0a3277344)
![Screenshot 2024-08-13 at 10 55 25 PM](https://github.com/user-attachments/assets/226fc61e-6bb3-4581-9781-8728432feef7)
![Screenshot 2024-08-13 at 10 55 19 PM](https://github.com/user-attachments/assets/0b178b40-92e4-4395-9167-6e1e025cd4e7)
![Screenshot 2024-08-13 at 10 55 12 PM](https://github.com/user-attachments/assets/ecf2b348-2cb2-4f23-9fc0-df1129f65422)
![Screenshot 2024-08-12 at 10 28 48 PM](https://github.com/user-attachments/assets/6baa2775-c69a-41e7-ac70-ecdfc805a117)
![Screenshot 2024-08-15 at 10 27 32 PM](https://github.com/user-attachments/assets/fe5929cc-7b09-4693-86a8-7ab1cb7f4d91)
![Screenshot 2024-08-15 at 10 28 31 PM](https://github.com/user-attachments/assets/461ac25f-b2f4-4bd2-a8f7-51754027c01d)
