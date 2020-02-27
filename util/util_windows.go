package util

import (
	"os/user"
	"path/filepath"

	"golang.org/x/sys/windows"
)

// DefaultDownloadsFolder returns the system-specific user downloads folder.
func DefaultDownloadsFolder() string {
	path, err := windows.KnownFolderPath(windows.FOLDERID_Downloads, 0)
	if err == nil {
		return path
	}
	whoami, err := user.Current()
	if err != nil {
		return "."
	}
	return filepath.Join(whoami.HomeDir, "Downloads")
}
