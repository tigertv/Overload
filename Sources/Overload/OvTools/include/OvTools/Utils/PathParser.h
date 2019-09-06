/**
* @project: Overload
* @author: Overload Tech.
* @restrictions: This software may not be resold, redistributed or otherwise conveyed to a third party.
*/

#pragma once

#include <string>

#include "OvTools/API/Export.h"

namespace OvTools::Utils
{
	/**
	* Provide some tools to get information about a given path
	*/
	class API_OVTOOLS PathParser
	{
	public:
		enum class EFileType
		{
			UNKNOWN,
			MODEL,
			TEXTURE,
			SHADER,
			MATERIAL,
			SOUND,
			SCENE,
			SCRIPT,
			FONT
		};

		/**
		* Disabled constructor
		*/
		PathParser() = delete;

		/**
		* Returns the windows style version of the given path ('/' replaced by '\')
		* @param p_path
		*/
		static std::string MakeWindowsStyle(const std::string& p_path);

		/**
		* Returns the non-windows style version of the given path ('\' replaced by '/')
		* @param p_path
		*/
		static std::string MakeNonWindowsStyle(const std::string& p_path);

		/**
		* Returns the containing folder of the file or folder identified by the given path
		* @param p_path
		*/
		static std::string GetContainingFolder(const std::string& p_path);

		/**
		* Returns the name of the file or folder identified by the given path
		* @param p_path
		*/
		static std::string GetElementName(const std::string& p_path);

		/**
		* Returns the extension of the file or folder identified by the given path
		* @param p_path
		*/
		static std::string GetExtension(const std::string& p_path);

		/**
		* Convert the EFileType value to a string
		* @param p_fileType
		*/
		static std::string FileTypeToString(EFileType p_fileType);

		/**
		* Returns the file type of the file identified by the given path
		* @param p_path
		*/
		static EFileType GetFileType(const std::string& p_path);
	};
}