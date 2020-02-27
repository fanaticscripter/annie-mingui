// +build darwin linux

package util

import (
	"os/user"
	"path/filepath"
)

// DefaultDownloadsFolder returns the system-specific user downloads folder.
func DefaultDownloadsFolder() string {
	whoami, err := user.Current()
	if err != nil {
		return "."
	}
	return filepath.Join(whoami.HomeDir, "Downloads")
}
