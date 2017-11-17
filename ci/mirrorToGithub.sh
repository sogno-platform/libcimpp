# install ssh-key
mkdir -p $HOME/.ssh
chmod -R +rw $HOME/.ssh
echo "$DEPLOY_KEY" > $HOME/.ssh/id_rsa
echo "$DEPLOY_KEY_PUB" > $HOME/.ssh/id_rsa.pub
chmod -R 400 $HOME/.ssh

# add  server host_key
echo "$GITLAB_HOSTKEY" >> $HOME/.ssh/known_hosts
echo "$GITHUB_HOSTKEY" >> $HOME/.ssh/known_hosts

# mirror repository from gitlab to github
git clone --mirror git@git.rwth-aachen.de:acs/core/cim/cimpp/libcimpp.git

cd libcimpp.git
git remote add github git@github.com:RWTH-ACS/libcimpp.git
git push --mirror github
