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

all:chp_01 chp_02 chp_03 chp_04 chp_06 chp_08


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

chk_target_dir:
	$(IF) [ ! -d $(HFDP_TARGET) ]; then mkdir -p $(HFDP_TARGET); fi

clean:
	$(RM) $(HFDP_TARGET)

