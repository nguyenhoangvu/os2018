cd ~/os2018
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git init
The program 'git' is currently not installed. You can install it by typing:
sudo apt install git
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ sudo apt-get install git
[sudo] password for quangtyt: 
Reading package lists... Done
Building dependency tree       
Reading state information... Done
The following additional packages will be installed:
  git-man liberror-perl
Suggested packages:
  git-daemon-run | git-daemon-sysvinit git-doc git-el git-email git-gui gitk
  gitweb git-arch git-cvs git-mediawiki git-svn
The following NEW packages will be installed:
  git git-man liberror-perl
0 upgraded, 3 newly installed, 0 to remove and 283 not upgraded.
Need to get 3.857 kB of archives.
After this operation, 25,6 MB of additional disk space will be used.
Do you want to continue? [Y/n] Y
Get:1 http://vn.archive.ubuntu.com/ubuntu xenial/main amd64 liberror-perl all 0.17-1.2 [19,6 kB]
Get:2 http://vn.archive.ubuntu.com/ubuntu xenial-updates/main amd64 git-man all 1:2.7.4-0ubuntu1.3 [736 kB]
Get:3 http://vn.archive.ubuntu.com/ubuntu xenial-updates/main amd64 git amd64 1:2.7.4-0ubuntu1.3 [3.102 kB]
Fetched 3.857 kB in 12s (309 kB/s)                                             
Selecting previously unselected package liberror-perl.
(Reading database ... 175112 files and directories currently installed.)
Preparing to unpack .../liberror-perl_0.17-1.2_all.deb ...
Unpacking liberror-perl (0.17-1.2) ...
Selecting previously unselected package git-man.
Preparing to unpack .../git-man_1%3a2.7.4-0ubuntu1.3_all.deb ...
Unpacking git-man (1:2.7.4-0ubuntu1.3) ...
Selecting previously unselected package git.
Preparing to unpack .../git_1%3a2.7.4-0ubuntu1.3_amd64.deb ...
Unpacking git (1:2.7.4-0ubuntu1.3) ...
Processing triggers for man-db (2.7.5-1) ...
Setting up liberror-perl (0.17-1.2) ...
Setting up git-man (1:2.7.4-0ubuntu1.3) ...
Setting up git (1:2.7.4-0ubuntu1.3) ...
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git init
Initialized empty Git repository in /home/quangtyt/os2018/.git/
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git remote add -v https://github.com/QuangICT/os2018-1
error: unknown switch `v'
usage: git remote add [<options>] <name> <url>

    -f, --fetch           fetch the remote branches
    --tags                import all tags and associated objects when fetching
                          or do not fetch any tag at all (--no-tags)
    -t, --track <branch>  branch(es) to track
    -m, --master <branch>
                          master branch
    --mirror[=<push|fetch>]
                          set up remote as a mirror to push to or fetch from

quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git remote add origin https://github.com/QuangICT/os2018-1
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git pull origin master
remote: Counting objects: 12, done.
remote: Total 12 (delta 0), reused 0 (delta 0), pack-reused 12
Unpacking objects: 100% (12/12), done.
From https://github.com/QuangICT/os2018-1
 * branch            master     -> FETCH_HEAD
 * [new branch]      master     -> origin/master
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git status
On branch master
Untracked files:
  (use "git add <file>..." to include in what will be committed)

	01.report.shell.commands.txt

nothing added to commit but untracked files present (use "git add" to track)
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git add
Nothing specified, nothing added.
Maybe you wanted to say 'git add .'?
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git add .
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git commit -m "First report"

*** Please tell me who you are.

Run

  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"

to set your account's default identity.
Omit --global to set the identity only in this repository.

fatal: unable to auto-detect email address (got 'quangtyt@quangtyt-Lenovo-Y520-15IKBN.(none)')
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git config --global user.email "quangtyt98@gmail.com"
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git config --global user.name "QuangICT"
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git commit -m
error: switch `m' requires a value
usage: git commit [<options>] [--] <pathspec>...

    -q, --quiet           suppress summary after successful commit
    -v, --verbose         show diff in commit message template

Commit message options
    -F, --file <file>     read message from file
    --author <author>     override author for commit
    --date <date>         override date for commit
    -m, --message <message>
                          commit message
    -c, --reedit-message <commit>
                          reuse and edit message from specified commit
    -C, --reuse-message <commit>
                          reuse message from specified commit
    --fixup <commit>      use autosquash formatted message to fixup specified commit
    --squash <commit>     use autosquash formatted message to squash specified commit
    --reset-author        the commit is authored by me now (used with -C/-c/--amend)
    -s, --signoff         add Signed-off-by:
    -t, --template <file>
                          use specified template file
    -e, --edit            force edit of commit
    --cleanup <default>   how to strip spaces and #comments from message
    --status              include status in commit message template
    -S, --gpg-sign[=<key-id>]
                          GPG sign commit

Commit contents options
    -a, --all             commit all changed files
    -i, --include         add specified files to index for commit
    --interactive         interactively add files
    -p, --patch           interactively add changes
    -o, --only            commit only specified files
    -n, --no-verify       bypass pre-commit hook
    --dry-run             show what would be committed
    --short               show status concisely
    --branch              show branch information
    --porcelain           machine-readable output
    --long                show status in long format (default)
    -z, --null            terminate entries with NUL
    --amend               amend previous commit
    --no-post-rewrite     bypass post-rewrite hook
    -u, --untracked-files[=<mode>]
                          show untracked files, optional modes: all, normal, no. (Default: all)

quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git commit -m "First report"
[master 21427d5] First report
 1 file changed, 111 insertions(+)
 create mode 100644 01.report.shell.commands.txt
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git push origin master
Username for 'https://github.com': QuangICT
Password for 'https://QuangICT@github.com': 
Counting objects: 3, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 2.01 KiB | 0 bytes/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To https://github.com/QuangICT/os2018-1
   aeb4873..21427d5  master -> master
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ 
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git status
On branch master
nothing to commit, working directory clean
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git status
On branch master
nothing to commit, working directory clean
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

	modified:   01.report.shell.commands.txt

no changes added to commit (use "git add" and/or "git commit -a")
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git add.
git: 'add.' is not a git command. See 'git --help'.

Did you mean this?
	add
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git commit -m "Updatae First Report"
On branch master
Changes not staged for commit:
	modified:   01.report.shell.commands.txt

no changes added to commit
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git add .
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git commit -m "Update First report"
[master 61a9990] Update First report
 1 file changed, 1 insertion(+), 1 deletion(-)
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ git push origin master
Username for 'https://github.com': QuangICT
Password for 'https://QuangICT@github.com': 
Counting objects: 3, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 403 bytes | 0 bytes/s, done.
Total 3 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/QuangICT/os2018-1
   21427d5..61a9990  master -> master
quangtyt@quangtyt-Lenovo-Y520-15IKBN:~/os2018$ 

