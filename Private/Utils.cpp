////////////////////////////////////////////////////////////////
//
// SURVIVALSHOP API
// Plugin to add "permission" item to custom goods definitions
// util functions
// 
////////////////////////////////

#include "Plugin.h"

namespace Utils
{
	// ToLower(text)
	// convert string to lowercase
	std::wstring ToLower(const std::wstring& w)
	{
		const size_t size = w.size();
		std::wstring lstr;
		if (size > 0)
		{
			lstr.resize(size);
			for (std::wstring::size_type i = 0; i < w.length(); ++i)
			{
				auto c = w[i];
				if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else if (c == L'�') c = L'�';
				else c = std::tolower(w[i]);
				lstr[i] = c;
			}
		}
		return lstr;
	}
}