# install ssh-key
mkdir -p $HOME/.ssh
chmod +rw $HOME/.ssh/id_rsa $HOME/.ssh/id_rsa.pub
echo "$DEPLOY_KEY" > $HOME/.ssh/id_rsa
chmod 400 $HOME/.ssh/id_rsa
echo "$DEPLOY_KEY_PUB" > $HOME/.ssh/id_rsa.pub
chmod 400 $HOME/.ssh/id_rsa.pub

# add  server host_key
echo "$GITLAB_HOSTKEY" >> $HOME/.ssh/known_hosts
echo "$GITHUB_HOSTKEY" >> $HOME/.ssh/known_hosts

# mirror repository from gitlab to github
git clone --mirror git@git.rwth-aachen.de:acs/core/cim/cimpp/libcimpp.git
cd libcimpp.git
git remote add github git@github.com:RWTH-ACS/libcimpp.git
git push --mirror github
