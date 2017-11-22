# CI Repository Mirroring

This script clones the "bare" Repository with all of its branches from Gitlab and pushes it to Github.
Authentication to the remotes is ensured through access-tokens passed to the runner.
The `GITHUB_TOKEN` must be granted write access to the target remote.
Tokens and the username for https-authentikation are stored as Secret-CI-Variables (Settings -> CI/CD -> Secret Variables).

.gitlab-ci.yml (in repository-root) starts an docker:git container on an docker-enabled CI-Runner for this project.

## Secret Variables
|Name           |Value                              |
|---            |---                                |
|GIT_USER       |git user for both GitLab & GitHub  |
|GITLAB_TOKEN   |accesstoken for GitLab             |
|GITHUB_TOKEN   |accesstoken for GitHub             |


## Mirroring a whole Repository

```
git clone --mirror <ORIGIN_REMOTE>
cd <REPO_NAME>
git push --mirror <TARGET_REMOTE>
```

