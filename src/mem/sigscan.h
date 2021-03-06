#pragma once

#include "../required.h"
#include "signature.h"
#include "module.h"

namespace ion
{
	class sigscan
	{
	public:
		sigscan(signature& sig, module& mod) : m_sig(sig), m_start(mod.getStart()), m_len(mod.getLen()), ran(false) {}
		sigscan(signature& sig, DWORD start, DWORD end) : m_sig(sig), m_start(start), m_len(end), ran(false) {}
		sigscan() {}
		~sigscan() {}
		DWORD find();

		signature m_sig;
		DWORD m_start, m_len;
		DWORD result;
		bool ran;
	};
}

