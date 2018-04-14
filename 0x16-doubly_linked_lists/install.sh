## Common Packages
#  ---------------
sudo apt-get -y update
sudo apt-get -y upgrade
sudo apt-get -y install software-properties-common libssl-dev openssl wget

## Install latest Python 3
#  -----------------------
PY_VERSION=3.4.3
PY_URL="https://www.python.org/ftp/python/$PY_VERSION/Python-$PY_VERSION.tgz"
PY_DIR="Python-$PY_VERSION"

# Run these cmd in /opt
cd $HOME
# Download Python
wget "$PY_URL"
# Extract it
sudo tar -xvf "$PY_DIR.tgz" -C /opt && rm -f "$PY_DIR.tgz"
# Link the headers
sudo ln -s "/opt/$PY_DIR/Include" /usr/include/python3.4
# Change to the directory
cd "/opt/$PY_DIR"
# Configure and make
./configure && make
# Install it
sudo make install