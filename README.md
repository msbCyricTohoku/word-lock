# wordlock
---text encryption/cipher with QT GUI---
*Wordlock project*
Brief introduction:
Wordlock project aims at encrypting/ciphering plain text using pseudo-random shuffling and pseudo-random letter injection.

How to:

Wordlock GUI is in QT5 libraries and the program was written purely in C++ programming language.

compile the program:
```
qmake && make
```
run using:
```
./wordlockQTLinux
```

1. Enter the plain text you would like to encrypt/cipher at “enter text” dialog box.
2.Make sure no spaces between each word, spaces make brute forcing easier, you can separate your words by “-”.
3. At the right had side of the GUI, you can see “cklog1”, “cklog2”, “ckchar1”and “ckchar2”. These variables will be used for our newly developed algorithm of word injection module.
4. For simplicity, you can set “cklog1” and “cklog2” to any integer number between 0 to 10. The GUI is automatically set to some values for ease of use, mainly if you are lazy to set these!
5. For the other 2 inputs, (i.e., ckchar1 and ckchar2), you can set any single character from your keyboard. The GUI is automatically set to some values for ease of use, mainly if you are lazy to set these!
6. Click on “Cipher” and in the output dialog you can see a red highlight, that is the cipher text without random letter injection module. The public cipher text that you can safely send to anyone without being easily understood will be stored in “wordlock.dat”. 
7. This file is in the same folder where you have executed the wordlock program. 
8. “wordlock.dat” is the encrypted plain text, please check and see if you can make any sense of the cipher text in this file, it would be hard!
9. In the same program folder, “key.dat” would be generated and that is your private key. Upon having this key, users can decrypt/decipher your secret message! 
10. You can simply click on “Decipher” to see the recovered message. This can also be seen in “revealdem.dat” file in the program folder. 
11. If you wish to lock other messages, you need to close the program and run again.
12. Every time you run, the random sequence will change, which means if you are not happy with the level of randomness, you can re-run the program to generate other sets of random sequences. 

--Secret message from someone:
If you have received a secret message from someone that used our program, you can simply copy the encrypted/cipher text into wordlock.dat file and replace the key.dat file with the key.dat sent to you privately. Then simply click on “Decipher”.

---
screenshot:

![alt text](https://github.com/msbCyricTohoku/word-lock/blob/main/image/img1.png)

Enjoy.

