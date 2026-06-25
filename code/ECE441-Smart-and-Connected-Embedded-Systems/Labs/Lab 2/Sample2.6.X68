*-----------------------------------------------------------
* Title      :
* Written by : Alan Palayil
* Date       :
* Description:
*-----------------------------------------------------------
    ORG    $5000
START: 
    LEA STR1, A5
    LEA END1, A6
    MOVE.B #243,D7
    TRAP #14 ; TRAP #14 ready prompt
    MOVE #241,D7
    TRAP #14 ; TRAP #14 input collections
    MOVE #226,D7
    TRAP #14 ; TRAP #14 store in D0 after conversion
    BRA INSERT  
   ORG $4500
INSERT: CMP.W (A0),D0 ; compare A0 and D0
    BCC LABEL1 ; If table value is less than inset value, branch to LBL1
    MOVE.W (A0),-(A0) ; increment the value
    ADDQ #4,A0
    CMPA.L A0,A1 ; Compare the memory address
    BCC START ; if its in the table Loop
LABEL1: MOVE.W D0,-(A0) ; insert the value into A0
    MOVE.B #228,D7
    TRAP #14 ; Trap #14 : Return to TUTOR
   SIMHALT ; halt simulator
   ORG $4000
STR1 DC.B 'Enter 4 Hex Digits: '
END1 DC.B 0
    END    START        ; last line of source


*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
