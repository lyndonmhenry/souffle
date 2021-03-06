# Souffle - A Datalog Compiler
# Copyright (c) 2013, Oracle and/or its affiliates. All rights reserved.
# Licensed under the Universal Permissive License v 1.0 as shown at:
# - https://opensource.org/licenses/UPL
# - <souffle root>/licenses/SOUFFLE-UPL.txt

SUBDIRS = . tests

SUFFIXES = .cpp .h .yy .ll .cc .hh .h

bin_PROGRAMS = souffle souffle-profile

nodist_souffle_profile_SOURCES = $(BUILT_SOURCES)

souffle_profile_sources = \
        ProfileDatabase.h                                  \
        json11.h                                           \
        profile/Cell.h                                     \
        profile/CellInterface.h                            \
        profile/Cli.h                                      \
        profile/DataComparator.h                           \
        profile/HtmlGenerator.h                            \
        profile/Iteration.h                                \
        profile/OutputProcessor.h                          \
        profile/ProgramRun.h                               \
        profile/Reader.h                                   \
        profile/Relation.h                                 \
        profile/Row.h                                      \
        profile/Rule.h                                     \
        profile/StringUtils.h                              \
        profile/Table.h                                    \
        profile/Tui.h                                      \
        profile/UserInputReader.h                          \
        profile/htmlCssChartist.h                          \
        profile/htmlCssStyle.h                             \
        profile/htmlJsChartistMin.h                        \
        profile/htmlJsChartistPlugin.h                     \
        profile/htmlJsMain.h                               \
        profile/htmlJsTableSort.h                          \
        profile/htmlJsUtil.h                               \
        profile/htmlMain.h

souffle_swig_sources = \
        swig/SwigInterface.h                               \
        swig/SwigInterface.i

souffle_utility_sources = \
        utility/CacheUtil.h                                \
        utility/ContainerUtil.h                            \
        utility/FileUtil.h                                 \
        utility/EvaluatorUtil.h                            \
        utility/FunctionalUtil.h                           \
        utility/MiscUtil.h                                 \
        utility/ParallelUtil.h                             \
        utility/StreamUtil.h                               \
        utility/StringUtil.h                               \
        utility/tinyformat.h

DIR := ${CURDIR}

# ... which should no go to distribution
nodist_souffle_SOURCES = $(BUILT_SOURCES)

if LIBZ
libz_sources = gzfstream.h
endif

if SQLITE
sqlite_sources = ReadStreamSQLite.h WriteStreamSQLite.h
endif


souffle_sources = \
        AggregateOp.h                                      \
        AstToRamTranslator.cpp                             \
        AstToRamTranslator.h                               \
        BinaryConstraintOps.h                              \
        Constraints.h                                      \
        DebugReport.cpp                                    \
        DebugReport.h                                      \
        ErrorReport.h                                      \
        EventProcessor.h                                   \
        FunctorOps.cpp                                     \
        FunctorOps.h                                       \
        Global.cpp                                         \
        Global.h                                           \
        GraphUtils.h                                       \
        IOSystem.h                                         \
        LogStatement.h                                     \
        ParserDriver.cpp                                   \
        ParserDriver.h                                     \
        ProfileEvent.h                                     \
        RamTypes.h                                         \
        ReadStream.h                                       \
        ReadStreamCSV.h                                    \
        ReadStreamJSON.h                                   \
        RecordTable.h                                      \
        RelationTag.h                                      \
        SerialisationStream.h                              \
        SignalHandler.h                                    \
        SrcLocation.cpp                                    \
        SrcLocation.h                                      \
        Util.cpp                                           \
        WriteStream.h                                      \
        WriteStreamCSV.h                                   \
        WriteStreamJSON.h                                  \
        ast/Abstract.h                                     \
        ast/Argument.h                                     \
        ast/Attribute.h                                    \
        ast/Clause.h                                       \
        ast/Component.h                                    \
        ast/FunctorDeclaration.h                           \
        ast/IO.h                                           \
        ast/Literal.h                                      \
        ast/Node.h                                         \
        ast/ParserUtils.cpp                                \
        ast/ParserUtils.h                                  \
        ast/Pragma.h                                       \
        ast/Program.h                                      \
        ast/QualifiedName.h                                \
        ast/Relation.h                                     \
        ast/TranslationUnit.h                              \
        ast/Type.h                                         \
        ast/Utils.cpp                                      \
        ast/Utils.h                                        \
        ast/Visitor.h                                      \
        ast/TypeSystem.cpp                                 \
        ast/TypeSystem.h                                   \
        ast/analysis/Analysis.h                            \
        ast/analysis/Constraint.h                          \
        ast/analysis/Ground.cpp                            \
        ast/analysis/Ground.h                              \
        ast/analysis/IOType.cpp                            \
        ast/analysis/IOType.h                              \
        ast/analysis/ProfileUse.cpp                        \
        ast/analysis/ProfileUse.h                          \
        ast/analysis/Type.cpp                              \
        ast/analysis/Type.h                                \
        ast/analysis/TypeEnvironment.cpp                   \
        ast/analysis/TypeEnvironment.h                     \
        ast/analysis/AuxArity.cpp                          \
        ast/analysis/AuxArity.h                            \
        ast/analysis/ComponentLookup.cpp                   \
        ast/analysis/ComponentLookup.h                     \
        ast/analysis/PrecedenceGraph.cpp                   \
        ast/analysis/PrecedenceGraph.h                     \
        ast/analysis/RecursiveClauses.cpp                  \
        ast/analysis/RecursiveClauses.h                    \
        ast/analysis/RedundantRelations.cpp                \
        ast/analysis/RedundantRelations.h                  \
        ast/analysis/RelationDetailCache.cpp               \
        ast/analysis/RelationDetailCache.h                 \
        ast/analysis/RelationSchedule.cpp                  \
        ast/analysis/RelationSchedule.h                    \
        ast/analysis/SCCGraph.cpp                          \
        ast/analysis/SCCGraph.h                            \
        ast/analysis/TopologicallySortedSCCGraph.cpp       \
        ast/analysis/TopologicallySortedSCCGraph.h         \
        ast/transform/ComponentChecker.cpp                 \
        ast/transform/ComponentChecker.h                   \
        ast/transform/PragmaChecker.cpp                    \
        ast/transform/PragmaChecker.h                      \
        ast/transform/SemanticChecker.cpp                  \
        ast/transform/SemanticChecker.h                    \
        ast/transform/Transformer.cpp                      \
        ast/transform/Transformer.h                        \
        ast/transform/UserDefinedFunctors.cpp              \
        ast/transform/UserDefinedFunctors.h                \
        ast/transform/ComponentInstantiation.cpp           \
        ast/transform/ComponentInstantiation.h             \
        ast/transform/Conditional.h                        \
        ast/transform/DebugReporter.cpp                    \
        ast/transform/DebugReporter.h                      \
        ast/transform/Fixpoint.h                           \
        ast/transform/FoldAnonymousRecords.cpp             \
        ast/transform/FoldAnonymousRecords.h               \
        ast/transform/IOAttributes.h                       \
        ast/transform/IODefaults.h                         \
        ast/transform/InlineRelations.cpp                  \
        ast/transform/InlineRelations.h                    \
        ast/transform/MagicSet.cpp                         \
        ast/transform/MagicSet.h                           \
        ast/transform/MaterializeAggregationQueries.cpp    \
        ast/transform/MaterializeAggregationQueries.h      \
        ast/transform/MaterializeSingletonAggregation.cpp  \
        ast/transform/MaterializeSingletonAggregation.h    \
        ast/transform/MinimiseProgram.cpp                  \
        ast/transform/MinimiseProgram.h                    \
        ast/transform/NameUnnamedVariables.cpp             \
        ast/transform/NameUnnamedVariables.h               \
        ast/transform/NormaliseConstraints.cpp             \
        ast/transform/NormaliseConstraints.h               \
        ast/transform/PartitionBodyLiterals.cpp            \
        ast/transform/PartitionBodyLiterals.h              \
        ast/transform/Pipeline.h                           \
        ast/transform/PolymorphicObjects.cpp               \
        ast/transform/PolymorphicObjects.h                 \
        ast/transform/Provenance.cpp                       \
        ast/transform/Provenance.h                         \
        ast/transform/ReduceExistentials.cpp               \
        ast/transform/ReduceExistentials.h                 \
        ast/transform/RemoveBooleanConstraints.cpp         \
        ast/transform/RemoveBooleanConstraints.h           \
        ast/transform/RemoveEmptyRelations.cpp             \
        ast/transform/RemoveEmptyRelations.h               \
        ast/transform/RemoveRedundantRelations.cpp         \
        ast/transform/RemoveRedundantRelations.h           \
        ast/transform/RemoveRedundantSums.cpp              \
        ast/transform/RemoveRedundantSums.h                \
        ast/transform/RemoveRelationCopies.cpp             \
        ast/transform/RemoveRelationCopies.h               \
        ast/transform/RemoveTypecasts.cpp                  \
        ast/transform/RemoveTypecasts.h                    \
        ast/transform/ReorderLiterals.cpp                  \
        ast/transform/ReorderLiterals.h                    \
        ast/transform/ReplaceSingletonVariables.cpp        \
        ast/transform/ReplaceSingletonVariables.h          \
        ast/transform/ResolveAliases.cpp                   \
        ast/transform/ResolveAliases.h                     \
        ast/transform/ResolveAnonymousRecordsAliases.cpp   \
        ast/transform/ResolveAnonymousRecordsAliases.h     \
        ast/transform/UniqueAggregationVariables.cpp       \
        ast/transform/UniqueAggregationVariables.h         \
        ast/transform/While.h                              \
        interpreter/InterpreterContext.h                   \
        interpreter/InterpreterEngine.cpp                  \
        interpreter/InterpreterEngine.h                    \
        interpreter/InterpreterGenerator.h                 \
        interpreter/InterpreterIndex.cpp                   \
        interpreter/InterpreterIndex.h                     \
        interpreter/InterpreterNode.h                      \
        interpreter/InterpreterPreamble.h                  \
        interpreter/InterpreterProgInterface.h             \
        interpreter/InterpreterRelation.cpp                \
        interpreter/InterpreterRelation.h                  \
        parser.cc                                          \
        parser.hh                                          \
        ram/Condition.h                                    \
        ram/Expression.h                                   \
        ram/Node.h                                         \
        ram/Operation.h                                    \
        ram/Program.h                                      \
        ram/Relation.h                                     \
        ram/Statement.h                                    \
        ram/TranslationUnit.h                              \
        ram/Utils.h                                        \
        ram/Visitor.h                                      \
        ram/analysis/Analysis.h                            \
        ram/analysis/ComplexityAnalysis.cpp                \
        ram/analysis/ComplexityAnalysis.h                  \
        ram/analysis/IndexAnalysis.cpp                     \
        ram/analysis/IndexAnalysis.h                       \
        ram/analysis/LevelAnalysis.cpp                     \
        ram/analysis/LevelAnalysis.h                       \
        ram/transform/ChoiceConversion.cpp                 \
        ram/transform/ChoiceConversion.h                   \
        ram/transform/CollapseFilters.cpp                  \
        ram/transform/CollapseFilters.h                    \
        ram/transform/EliminateDuplicates.cpp              \
        ram/transform/EliminateDuplicates.h                \
        ram/transform/ExpandFilter.cpp                     \
        ram/transform/ExpandFilter.h                       \
        ram/transform/HoistAggregate.cpp                   \
        ram/transform/HoistAggregate.h                     \
        ram/transform/HoistConditions.cpp                  \
        ram/transform/HoistConditions.h                    \
        ram/transform/IfConversion.cpp                     \
        ram/transform/IfConversion.h                       \
        ram/transform/IndexedInequality.cpp                \
        ram/transform/IndexedInequality.h                  \
        ram/transform/MakeIndex.cpp                        \
        ram/transform/MakeIndex.h                          \
        ram/transform/Parallel.cpp                         \
        ram/transform/Parallel.h                           \
        ram/transform/Transformer.cpp                      \
        ram/transform/Transformer.h                        \
        ram/transform/ReorderConditions.cpp                \
        ram/transform/ReorderConditions.h                  \
        ram/transform/ReorderFilterBreak.cpp               \
        ram/transform/ReorderFilterBreak.h                 \
        ram/transform/ReportIndex.h                        \
        ram/transform/TupleId.cpp                          \
        ram/transform/TupleId.h                            \
        scanner.cc                                         \
        stack.hh                                           \
        synthesiser/Synthesiser.cpp                        \
        synthesiser/Synthesiser.h                          \
        synthesiser/SynthesiserRelation.cpp                \
        synthesiser/SynthesiserRelation.h                  \
        $(sqlite_sources)                                  \
        $(libz_sources)                                    \
        $(souffle_utility_sources)                         \
        $(souffle_profile_sources)

# -- build souffle as a library so it can be reused in testing
noinst_LTLIBRARIES = libsouffle.la
libsouffle_la_SOURCES  = $(souffle_sources)
libsouffle_la_CXXFLAGS = $(souffle_CPPFLAGS) $(FFI_CFLAGS)
libsouffle_la_LDFLAGS = --static --dlopen --pic -ldl -lffi

souffle_SOURCES = main.cpp
souffle_LDADD = libsouffle.la

souffle_profile_SOURCES = souffle_prof.cpp

dist_bin_SCRIPTS = souffle-compile souffle-config

EXTRA_DIST = parser.yy scanner.ll

soufflepublicdir = $(includedir)/souffle

soufflepublic_HEADERS = \
        BTree.h                                            \
        BinaryConstraintOps.h                              \
        Brie.h                                             \
        CompiledOptions.h                                  \
        CompiledSouffle.h                                  \
        CompiledTuple.h                                    \
        EquivalenceRelation.h                              \
        EventProcessor.h                                   \
        Explain.h                                          \
        ExplainProvenance.h                                \
        ExplainProvenanceImpl.h                            \
        ExplainTree.h                                      \
        IOSystem.h                                         \
        LambdaBTree.h                                      \
        Logger.h                                           \
        PiggyList.h                                        \
        ProfileDatabase.h                                  \
        ProfileEvent.h                                     \
        RamTypes.h                                         \
        ReadStream.h                                       \
        ReadStreamCSV.h                                    \
        ReadStreamJSON.h                                   \
        RecordTable.h                                      \
        SerialisationStream.h                              \
        SignalHandler.h                                    \
        SouffleInterface.h                                 \
        SymbolTable.h                                      \
        Table.h                                            \
        UnionFind.h                                        \
        WriteStream.h                                      \
        WriteStreamCSV.h                                   \
        WriteStreamJSON.h                                  \
        json11.h                                           \
        $(souffle_utility_sources)                         \
        $(libz_sources)                                    \
        $(sqlite_sources)

souffleprofiledir = $(soufflepublicdir)/profile

souffleprofile_HEADERS = $(souffle_profile_sources)

souffleswigdir = $(soufflepublicdir)/swig

souffleswig_HEADERS = $(souffle_swig_sources)

souffleutilitydir = $(soufflepublicdir)/utility

souffleutility_HEADERS = $(souffle_utility_sources)

# files to clean
CLEANFILES = $(BUILT_SOURCES)  parser.cc scanner.cc parser.hh stack.hh

# run Bison
$(builddir)/parser.hh: $(srcdir)/parser.yy
	$(BISON) -Wall -Werror -Wno-error=deprecated -Wno-error=other -v -d -o parser.cc $(srcdir)/parser.yy

# and FLEX
$(builddir)/scanner.cc: $(srcdir)/scanner.ll
	$(FLEX) -o scanner.cc $(srcdir)/scanner.ll

# driver depends on the generated header
$(builddir)/parser.cc $(builddir)/stack.hh $(builddir)/scanner.cc \
    $(builddir)/main.cpp $(builddir)/ParserDriver.cpp: $(builddir)/parser.hh

