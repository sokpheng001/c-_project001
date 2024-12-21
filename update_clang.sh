# Install Homebrew first if you haven't
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Update Homebrew
brew update

# Install/Update LLVM (includes Clang)
brew install llvm

# If already installed, upgrade it:
brew upgrade llvm