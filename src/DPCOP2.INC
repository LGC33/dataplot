C-----THIS IS COMMON/INCLUDE FILE DPCOP2.INC-----
C     THIS IS COMMON FOR DEFINING SOME BASIC PARAMETERS
C
CCCCC UPDATED--APRIL       2020.  CREATE AS INCLUDE FILE TO
CCCCC                             MAKE IT EASIER TO DEFINE MAXIMUM
CCCCC                             NUMBER OF OUTPUT CHARACTERS
C
      INTEGER MAXOUT
      INTEGER IRD
      INTEGER IPR
      INTEGER NUMBPC
      INTEGER NUMCPW
      INTEGER NUMBPW
      INTEGER NCOUT
      INTEGER ILOUT
      REAL CPUMIN
      REAL CPUMAX
      PARAMETER (MAXOUT=1024)
C
      CHARACTER*4 IFEEDB
      CHARACTER*4 IPRINT
      CHARACTER (LEN=MAXOUT) :: ICOUT
C
      COMMON /MACH/IRD,IPR,CPUMIN,CPUMAX,NUMBPC,NUMCPW,NUMBPW
      COMMON /PRINT/IFEEDB,IPRINT
      COMMON /TEXTOU/ICOUT,NCOUT,ILOUT
