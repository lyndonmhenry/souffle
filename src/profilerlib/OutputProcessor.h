/*
 * Souffle - A Datalog Compiler
 * Copyright (c) 2016, The Souffle Developers. All rights reserved
 * Licensed under the Universal Permissive License v 1.0 as shown at:
 * - https://opensource.org/licenses/UPL
 * - <souffle root>/licenses/SOUFFLE-UPL.txt
 */

#pragma once

#include <memory>
#include <string>
#include <vector>

#include "Cell.h"
#include "ProgramRun.h"
#include "Row.h"
#include "StringUtils.h"
#include "Table.h"

/*
 * Class to format profiler data structures into tables
 */
class OutputProcessor {
private:
    std::shared_ptr<ProgramRun> programRun;

public:
    OutputProcessor() {
        programRun = std::make_shared<ProgramRun>(ProgramRun());
    }

    inline std::shared_ptr<ProgramRun>& getProgramRun() {
        return programRun;
    }

    Table getRelTable();

    Table getRulTable();

    Table getSubrulTable(std::string strRel, std::string strRul);

    Table getAtomTable(std::string strRel, std::string strRul);

    Table getVersions(std::string strRel, std::string strRul);

    Table getVersionAtoms(std::string strRel, std::string strRul, int version);

    std::string formatTime(double number) {
        return Tools::formatTime(number);
    }

    std::string formatNum(int precision, long number) {
        return Tools::formatNum(precision, number);
    }

    std::vector<std::vector<std::string>> formatTable(Table table, int precision) {
        return Tools::formatTable(table, precision);
    }
};
