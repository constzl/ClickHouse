#pragma once

#include <string>
#include <Core/Names.h>
#include <Parsers/IAST_fwd.h>


namespace DB
{

/// Find parameters in a query parameter values and collect them into map.
NameToNameMap analyzeReceiveFunctionParamValues(const ASTPtr & ast);

}
