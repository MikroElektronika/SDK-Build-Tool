/**
 * @brief Copies up to 65536 initializers from Flash to RAM.
 * @details This function copies up to 65536 initializers from Flash memory to RAM.
 *          The number of bytes to copy is preloaded in registers R24 and R25.
 * @return None.
 */
void __CC2DW()
{
    asm {
    L_loopDW:
        LPM        R0 , Z+
        ST         X+ , R0
        SBIW       R24, 1
        BRNE       L_loopDW
    }
}

void __FillZeros()
{
    asm {
        LDI        R0 , 0
    L_loopDW:
        ST         X+ , R0
        SBIW       R24, 1
        BRNE       L_loopDW
    }
}

void __CA2AW()
{
    asm {
    L_loopCA2A:
        LD         R0, Z+
        ST         X+, R0
        SBIW       R24, 1
        BRNE       L_loopCA2A
    }
}

void __CCA2AW()
{
    asm {
    L_loopCCA2A:
        LPM        R0, Z+
        ST         X+, R0
        SBIW       R24, 1
        BRNE       L_loopCCA2A
    }
  }

void __CFCA2A()
{
    asm {
    L_loopCFCA2A:
        ELPM       R0, Z+
        ST         X+, R0
        SBIW       R24, 1
        BRNE       L_loopCFCA2A
    }
  }

void __CS2S()
{
    asm {
    L_loopCS2Ss:
        LD         R0, Z+
        TST        R0
        BREQ       l_CS2Send
        ST         X+, R0
        BRNE       L_loopCS2Ss
    l_CS2Send:
    }
  }

void __CCS2S()
{
    asm {
    L_loopCCS2Ss:
        LPM        R0, Z+
        TST        R0
        BREQ       l_CCS2Send
        ST         X+, R0
        BRNE       L_loopCCS2Ss
    l_CCS2Send:
    }
  }

void __CFCS2S()
{
    asm {
    L_loopCFCS2Ss:
        ELPM       R0, Z+
        TST        R0
        BREQ       l_CFCS2Send
        ST         X+, R0
        BRNE       L_loopCFCS2Ss
    l_CFCS2Send:
    }
  }

void __FZinS()
{
    asm {
    L_loopFZinSWs:
        LD         R0, X+
        TST        R0
        BRNE       L_loopFZinSWs
        SBIW       X, 1
    }
  }
