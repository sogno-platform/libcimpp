# CI Repository Mirroring

This script clones the "bare" Repository with all of its features from Gitlab and pushes it to Github.
Authentication to the remotes is ensured through an Deploy-Key passed to the runner. The public part of this key is listed as "Deploy Key" on both remotes.
The key must be granted write access to the target remote.
Deploy-Keys and Host-Keys are stored as Secret-CI-Variables (Settings -> CI/CD -> Secret Variables) to ensure protection againt MIM-Attacks.

.gitlab-ci.yml (in repository-root) starts an docker:git container on an docker-enabled CI-Runner for this project.

## Secret Variables
|Name           |Value                                              |
|---            |---                                                |
|DEPLOY_KEY     |private part of the Deploy-Key for both remotes    |
|DEPLOY_KEY_PUB |public part of the Deploy-Key                      |
|GITLAB_HOSTKEY |hostname and key for git.rwth-aachen.de            |
|GITHUB_HOSTKEY |hostname and key for gitlab.com                    |


## Mirroring a whole Repository

```
git clone --mirror <ORIGIN_REMOTE>
cd <REPO_NAME>
git remote add target <TARGET_REMOTE>
git push --mirror target
```