/*
	This file is part of cpp-ethereum.

	cpp-ethereum is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Foobar is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file Defaults.h
 * @author Gav Wood <i@gavwood.com>
 * @date 2014
 */

#pragma once

#include "Common.h"

namespace eth
{

struct Defaults
{
	friend class BlockChain;
	friend class State;

public:
	Defaults();

	static Defaults* get() { if (!s_this) s_this = new Defaults; return s_this; }
	static void setDBPath(std::string const& _dbPath) { get()->m_dbPath = _dbPath; }

private:
	std::string m_dbPath;

	static Defaults* s_this;
};

}
