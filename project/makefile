-include build.mak
-include cmds.mak
-include dirs.mak

.PHONY: clean

HFPD_01_ALL_CPP = $(wildcard $(HFDP_SRC_01)/*.cpp)
HFPD_02_ALL_CPP = $(wildcard $(HFDP_SRC_02)/*.cpp)
HFPD_03_ALL_CPP = $(wildcard $(HFDP_SRC_03)/*.cpp)
HFPD_04_ALL_CPP = $(wildcard $(HFDP_SRC_04)/*.cpp)
HFPD_06_ALL_CPP = $(wildcard $(HFDP_SRC_06)/*.cpp)
HFPD_08_ALL_CPP = $(wildcard $(HFDP_SRC_08)/*.cpp)
HFPD_09_ALL_CPP = $(wildcard $(HFDP_SRC_09)/*.cpp)
HFPD_10_ALL_CPP = $(wildcard $(HFDP_SRC_10)/*.cpp)
HFPD_12_ALL_CPP = $(wildcard $(HFDP_SRC_12)/*.cpp)

all:chp_01 chp_02 chp_03 chp_04 chp_06 chp_08 chp_09 chp_10 chp_12

chk_target_dir:
	$(IF) [ ! -d $(HFDP_TARGET) ]; then mkdir -p $(HFDP_TARGET); fi

chp_01:chk_target_dir
	$(CC) -o $(HFDP_TARGET)/$@ $(HFPD_01_ALL_CPP) -I $(HFDP_INC_01)

chp_02:chk_target_dir
	$(CC) -o $(HFDP_TARGET)/$@ $(HFPD_02_ALL_CPP) -I $(HFDP_INC_02)

chp_03:chk_target_dir
	$(CC) -o $(HFDP_TARGET)/$@ $(HFPD_03_ALL_CPP) -I $(HFDP_INC_03)

chp_04:chk_target_dir
	$(CC) $(CCFLAG) -o $(HFDP_TARGET)/$@ $(HFPD_04_ALL_CPP) -I $(HFDP_INC_04)

chp_06:chk_target_dir
	$(CC) $(CCFLAG) -o $(HFDP_TARGET)/$@ $(HFPD_06_ALL_CPP) -I $(HFDP_INC_06)

chp_08:chk_target_dir
	$(CC) $(CCFLAG) -o $(HFDP_TARGET)/$@ $(HFPD_08_ALL_CPP) -I $(HFDP_INC_08)

chp_09:chk_target_dir
	$(CC) $(CCFLAG) -o $(HFDP_TARGET)/$@ $(HFPD_09_ALL_CPP) -I $(HFDP_INC_09)

chp_10:chk_target_dir
	$(CC) $(CCFLAG) -o $(HFDP_TARGET)/$@ $(HFPD_10_ALL_CPP) -I $(HFDP_INC_10)

chp_12:chk_target_dir
	$(CC) $(CCFLAG) -o $(HFDP_TARGET)/$@ $(HFPD_12_ALL_CPP) -I $(HFDP_INC_12)

clean:
	$(RM) $(HFDP_TARGET)