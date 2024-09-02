#pragma once

using namespace System;

public ref class ProgramData {

private:
	String^ Username;


public:

	void Set(String^ username) {
		Username = username;
	}

	String^ Get() {
		return Username;
	}

};