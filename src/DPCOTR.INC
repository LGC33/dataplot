C-----THIS IS COMMON/INCLUDE FILE DPCOTR.INC-----
C     THIS IS COMMON FOR TRANSLATOR
C
      CHARACTER*4 ITRANS
C
      CHARACTER*30 ICTRA1
      CHARACTER*30 ICTRA2
C
      DIMENSION ICTRA1(100)
      DIMENSION NCTRA1(100)
      DIMENSION ICTRA2(100)
      DIMENSION NCTRA2(100)
C
      COMMON /ICTRAN/ITRANS
      COMMON /ICTRST/NCTRA1,NCTRA2,NUMTRA
      COMMON /ICTRSC/ICTRA1,ICTRA2
C
