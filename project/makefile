
-include cmds.mak
-include dirs.mak

.PHONY: clean


HFPD_01_ALL_CPP = $(wildcard $(HFDP_SRC_01)/*.cpp)
HFPD_02_ALL_CPP = $(wildcard $(HFDP_SRC_02)/*.cpp)

All:chp_01 chp_02

chp_01:
	$(IF) [ ! -d $(HFDP_TARGET) ]; then mkdir -p $(HFDP_TARGET); fi
	$(CC) -o $(HFDP_TARGET)/$@ $(HFPD_01_ALL_CPP) -I $(HFDP_INC_01)

chp_02:
	$(IF) [ ! -d $(HFDP_TARGET) ]; then mkdir -p $(HFDP_TARGET); fi
	$(CC) -o $(HFDP_TARGET)/$@ $(HFPD_02_ALL_CPP) -I $(HFDP_INC_02)


clean:
	$(RM) $(HFDP_TARGET)

