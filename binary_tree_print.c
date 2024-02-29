{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":"README.md","path":"README.md","contentType":"file"},{"name":"binary_tree_print.c","path":"binary_tree_print.c","contentType":"file"},{"name":"binary_trees.h","path":"binary_trees.h","contentType":"file"}],"totalCount":3}},"fileTreeProcessingTime":1.655398,"foldersToFetch":[],"repo":{"id":83280327,"defaultBranch":"master","name":"0x1C.c","ownerLogin":"alx-tools","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2017-02-27T07:18:09.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/13408012?v=4","public":true,"private":false,"isOrgOwned":true},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1488179890.0","canEdit":false,"refType":"branch","currentOid":"e1fe30fbc99061324999e19e9da7ecfb771585c2"},"path":"binary_tree_print.c","currentUser":null,"blob":{"rawLines":["#include <stdio.h>","#include <stdlib.h>","#include <string.h>","#include \"binary_trees.h\"","","/* Original code from http://stackoverflow.com/a/13755911/5184480 */","","/**"," * print_t - Stores recursively each level in an array of strings"," *"," * @tree: Pointer to the node to print"," * @offset: Offset to print"," * @depth: Depth of the node"," * @s: Buffer"," *"," * Return: length of printed tree after process"," */","static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)","{","\tchar b[6];","\tint width, left, right, is_left, i;","","\tif (!tree)","\t\treturn (0);","\tis_left = (tree->parent && tree->parent->left == tree);","\twidth = sprintf(b, \"(%03d)\", tree->n);","\tleft = print_t(tree->left, offset, depth + 1, s);","\tright = print_t(tree->right, offset + left + width, depth + 1, s);","\tfor (i = 0; i < width; i++)","\t\ts[depth][offset + left + i] = b[i];","\tif (depth && is_left)","\t{","\t\tfor (i = 0; i < width + right; i++)","\t\t\ts[depth - 1][offset + left + width / 2 + i] = '-';","\t\ts[depth - 1][offset + left + width / 2] = '.';","\t}","\telse if (depth && !is_left)","\t{","\t\tfor (i = 0; i < left + width; i++)","\t\t\ts[depth - 1][offset - width / 2 + i] = '-';","\t\ts[depth - 1][offset + left + width / 2] = '.';","\t}","\treturn (left + width + right);","}","","/**"," * _height - Measures the height of a binary tree"," *"," * @tree: Pointer to the node to measures the height"," *"," * Return: The height of the tree starting at @node"," */","static size_t _height(const binary_tree_t *tree)","{","\tsize_t height_l;","\tsize_t height_r;","","\theight_l = tree->left ? 1 + _height(tree->left) : 0;","\theight_r = tree->right ? 1 + _height(tree->right) : 0;","\treturn (height_l > height_r ? height_l : height_r);","}","","/**"," * binary_tree_print - Prints a binary tree"," *"," * @tree: Pointer to the root node of the tree to print"," */","void binary_tree_print(const binary_tree_t *tree)","{","\tchar **s;","\tsize_t height, i, j;","","\tif (!tree)","\t\treturn;","\theight = _height(tree);","\ts = malloc(sizeof(*s) * (height + 1));","\tif (!s)","\t\treturn;","\tfor (i = 0; i < height + 1; i++)","\t{","\t\ts[i] = malloc(sizeof(**s) * 255);","\t\tif (!s[i])","\t\t\treturn;","\t\tmemset(s[i], 32, 255);","\t}","\tprint_t(tree, 0, 0, s);","\tfor (i = 0; i < height + 1; i++)","\t{","\t\tfor (j = 254; j > 1; --j)","\t\t{","\t\t\tif (s[i][j] != ' ')","\t\t\t\tbreak;","\t\t\ts[i][j] = '\\0';","\t\t}","\t\tprintf(\"%s\\n\", s[i]);","\t\tfree(s[i]);","\t}","\tfree(s);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":25,"cssClass":"pl-s"}],[],[{"start":0,"end":68,"cssClass":"pl-c"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":65,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":38,"cssClass":"pl-c"}],[{"start":0,"end":27,"cssClass":"pl-c"}],[{"start":0,"end":28,"cssClass":"pl-c"}],[{"start":0,"end":13,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":47,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":10,"cssClass":"pl-smi"},{"start":11,"end":18,"cssClass":"pl-en"},{"start":19,"end":24,"cssClass":"pl-k"},{"start":25,"end":38,"cssClass":"pl-smi"},{"start":39,"end":40,"cssClass":"pl-c1"},{"start":40,"end":44,"cssClass":"pl-s1"},{"start":46,"end":49,"cssClass":"pl-smi"},{"start":50,"end":56,"cssClass":"pl-s1"},{"start":58,"end":61,"cssClass":"pl-smi"},{"start":62,"end":67,"cssClass":"pl-s1"},{"start":69,"end":73,"cssClass":"pl-smi"},{"start":74,"end":75,"cssClass":"pl-c1"},{"start":75,"end":76,"cssClass":"pl-c1"},{"start":76,"end":77,"cssClass":"pl-s1"}],[],[{"start":1,"end":5,"cssClass":"pl-smi"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":12,"end":16,"cssClass":"pl-s1"},{"start":18,"end":23,"cssClass":"pl-s1"},{"start":25,"end":32,"cssClass":"pl-s1"},{"start":34,"end":35,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":6,"end":10,"cssClass":"pl-s1"}],[{"start":2,"end":8,"cssClass":"pl-k"},{"start":10,"end":11,"cssClass":"pl-c1"}],[{"start":1,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-s1"},{"start":16,"end":18,"cssClass":"pl-c1"},{"start":18,"end":24,"cssClass":"pl-c1"},{"start":25,"end":27,"cssClass":"pl-c1"},{"start":28,"end":32,"cssClass":"pl-s1"},{"start":32,"end":34,"cssClass":"pl-c1"},{"start":34,"end":40,"cssClass":"pl-c1"},{"start":40,"end":42,"cssClass":"pl-c1"},{"start":42,"end":46,"cssClass":"pl-c1"},{"start":47,"end":49,"cssClass":"pl-c1"},{"start":50,"end":54,"cssClass":"pl-s1"}],[{"start":1,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":16,"cssClass":"pl-en"},{"start":17,"end":18,"cssClass":"pl-s1"},{"start":20,"end":28,"cssClass":"pl-s"},{"start":30,"end":34,"cssClass":"pl-s1"},{"start":34,"end":36,"cssClass":"pl-c1"},{"start":36,"end":37,"cssClass":"pl-c1"}],[{"start":1,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":15,"cssClass":"pl-en"},{"start":16,"end":20,"cssClass":"pl-s1"},{"start":20,"end":22,"cssClass":"pl-c1"},{"start":22,"end":26,"cssClass":"pl-c1"},{"start":28,"end":34,"cssClass":"pl-s1"},{"start":36,"end":41,"cssClass":"pl-s1"},{"start":42,"end":43,"cssClass":"pl-c1"},{"start":44,"end":45,"cssClass":"pl-c1"},{"start":47,"end":48,"cssClass":"pl-s1"}],[{"start":1,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":16,"cssClass":"pl-en"},{"start":17,"end":21,"cssClass":"pl-s1"},{"start":21,"end":23,"cssClass":"pl-c1"},{"start":23,"end":28,"cssClass":"pl-c1"},{"start":30,"end":36,"cssClass":"pl-s1"},{"start":37,"end":38,"cssClass":"pl-c1"},{"start":39,"end":43,"cssClass":"pl-s1"},{"start":44,"end":45,"cssClass":"pl-c1"},{"start":46,"end":51,"cssClass":"pl-s1"},{"start":53,"end":58,"cssClass":"pl-s1"},{"start":59,"end":60,"cssClass":"pl-c1"},{"start":61,"end":62,"cssClass":"pl-c1"},{"start":64,"end":65,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":22,"cssClass":"pl-s1"},{"start":24,"end":25,"cssClass":"pl-s1"},{"start":25,"end":27,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":4,"end":9,"cssClass":"pl-s1"},{"start":11,"end":17,"cssClass":"pl-s1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":20,"end":24,"cssClass":"pl-s1"},{"start":25,"end":26,"cssClass":"pl-c1"},{"start":27,"end":28,"cssClass":"pl-s1"},{"start":30,"end":31,"cssClass":"pl-c1"},{"start":32,"end":33,"cssClass":"pl-s1"},{"start":34,"end":35,"cssClass":"pl-s1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":14,"end":21,"cssClass":"pl-s1"}],[],[{"start":2,"end":5,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":14,"end":15,"cssClass":"pl-s1"},{"start":16,"end":17,"cssClass":"pl-c1"},{"start":18,"end":23,"cssClass":"pl-s1"},{"start":24,"end":25,"cssClass":"pl-c1"},{"start":26,"end":31,"cssClass":"pl-s1"},{"start":33,"end":34,"cssClass":"pl-s1"},{"start":34,"end":36,"cssClass":"pl-c1"}],[{"start":3,"end":4,"cssClass":"pl-s1"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":16,"end":22,"cssClass":"pl-s1"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":25,"end":29,"cssClass":"pl-s1"},{"start":30,"end":31,"cssClass":"pl-c1"},{"start":32,"end":37,"cssClass":"pl-s1"},{"start":40,"end":41,"cssClass":"pl-c1"},{"start":42,"end":43,"cssClass":"pl-c1"},{"start":44,"end":45,"cssClass":"pl-s1"},{"start":47,"end":48,"cssClass":"pl-c1"},{"start":49,"end":52,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":4,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":15,"end":21,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":24,"end":28,"cssClass":"pl-s1"},{"start":29,"end":30,"cssClass":"pl-c1"},{"start":31,"end":36,"cssClass":"pl-s1"},{"start":39,"end":40,"cssClass":"pl-c1"},{"start":42,"end":43,"cssClass":"pl-c1"},{"start":44,"end":47,"cssClass":"pl-c1"}],[],[{"start":1,"end":5,"cssClass":"pl-k"},{"start":6,"end":8,"cssClass":"pl-k"},{"start":10,"end":15,"cssClass":"pl-s1"},{"start":16,"end":18,"cssClass":"pl-c1"},{"start":20,"end":27,"cssClass":"pl-s1"}],[],[{"start":2,"end":5,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":14,"end":15,"cssClass":"pl-s1"},{"start":16,"end":17,"cssClass":"pl-c1"},{"start":18,"end":22,"cssClass":"pl-s1"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":25,"end":30,"cssClass":"pl-s1"},{"start":32,"end":33,"cssClass":"pl-s1"},{"start":33,"end":35,"cssClass":"pl-c1"}],[{"start":3,"end":4,"cssClass":"pl-s1"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":16,"end":22,"cssClass":"pl-s1"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":25,"end":30,"cssClass":"pl-s1"},{"start":33,"end":34,"cssClass":"pl-c1"},{"start":35,"end":36,"cssClass":"pl-c1"},{"start":37,"end":38,"cssClass":"pl-s1"},{"start":40,"end":41,"cssClass":"pl-c1"},{"start":42,"end":45,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":4,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":15,"end":21,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":24,"end":28,"cssClass":"pl-s1"},{"start":29,"end":30,"cssClass":"pl-c1"},{"start":31,"end":36,"cssClass":"pl-s1"},{"start":39,"end":40,"cssClass":"pl-c1"},{"start":42,"end":43,"cssClass":"pl-c1"},{"start":44,"end":47,"cssClass":"pl-c1"}],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":13,"cssClass":"pl-s1"},{"start":14,"end":15,"cssClass":"pl-c1"},{"start":16,"end":21,"cssClass":"pl-s1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":24,"end":29,"cssClass":"pl-s1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":49,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":52,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":51,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":13,"cssClass":"pl-smi"},{"start":14,"end":21,"cssClass":"pl-en"},{"start":22,"end":27,"cssClass":"pl-k"},{"start":28,"end":41,"cssClass":"pl-smi"},{"start":42,"end":43,"cssClass":"pl-c1"},{"start":43,"end":47,"cssClass":"pl-s1"}],[],[{"start":1,"end":7,"cssClass":"pl-smi"},{"start":8,"end":16,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-smi"},{"start":8,"end":16,"cssClass":"pl-s1"}],[],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-s1"},{"start":16,"end":18,"cssClass":"pl-c1"},{"start":18,"end":22,"cssClass":"pl-c1"},{"start":25,"end":26,"cssClass":"pl-c1"},{"start":27,"end":28,"cssClass":"pl-c1"},{"start":29,"end":36,"cssClass":"pl-en"},{"start":37,"end":41,"cssClass":"pl-s1"},{"start":41,"end":43,"cssClass":"pl-c1"},{"start":43,"end":47,"cssClass":"pl-c1"},{"start":51,"end":52,"cssClass":"pl-c1"}],[{"start":1,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-s1"},{"start":16,"end":18,"cssClass":"pl-c1"},{"start":18,"end":23,"cssClass":"pl-c1"},{"start":26,"end":27,"cssClass":"pl-c1"},{"start":28,"end":29,"cssClass":"pl-c1"},{"start":30,"end":37,"cssClass":"pl-en"},{"start":38,"end":42,"cssClass":"pl-s1"},{"start":42,"end":44,"cssClass":"pl-c1"},{"start":44,"end":49,"cssClass":"pl-c1"},{"start":53,"end":54,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":20,"end":28,"cssClass":"pl-s1"},{"start":31,"end":39,"cssClass":"pl-s1"},{"start":42,"end":50,"cssClass":"pl-s1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":43,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":55,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":22,"cssClass":"pl-en"},{"start":23,"end":28,"cssClass":"pl-k"},{"start":29,"end":42,"cssClass":"pl-smi"},{"start":43,"end":44,"cssClass":"pl-c1"},{"start":44,"end":48,"cssClass":"pl-s1"}],[],[{"start":1,"end":5,"cssClass":"pl-smi"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":8,"end":9,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-smi"},{"start":8,"end":14,"cssClass":"pl-s1"},{"start":16,"end":17,"cssClass":"pl-s1"},{"start":19,"end":20,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":6,"end":10,"cssClass":"pl-s1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[{"start":1,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":17,"cssClass":"pl-en"},{"start":18,"end":22,"cssClass":"pl-s1"}],[{"start":1,"end":2,"cssClass":"pl-s1"},{"start":3,"end":4,"cssClass":"pl-c1"},{"start":5,"end":11,"cssClass":"pl-en"},{"start":12,"end":18,"cssClass":"pl-k"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":20,"end":21,"cssClass":"pl-s1"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":26,"end":32,"cssClass":"pl-s1"},{"start":33,"end":34,"cssClass":"pl-c1"},{"start":35,"end":36,"cssClass":"pl-c1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":23,"cssClass":"pl-s1"},{"start":24,"end":25,"cssClass":"pl-c1"},{"start":26,"end":27,"cssClass":"pl-c1"},{"start":29,"end":30,"cssClass":"pl-s1"},{"start":30,"end":32,"cssClass":"pl-c1"}],[],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":4,"end":5,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":15,"cssClass":"pl-en"},{"start":16,"end":22,"cssClass":"pl-k"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":24,"end":25,"cssClass":"pl-c1"},{"start":25,"end":26,"cssClass":"pl-s1"},{"start":28,"end":29,"cssClass":"pl-c1"},{"start":30,"end":33,"cssClass":"pl-c1"}],[{"start":2,"end":4,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-s1"}],[{"start":3,"end":9,"cssClass":"pl-k"}],[{"start":2,"end":8,"cssClass":"pl-en"},{"start":9,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-s1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":19,"end":22,"cssClass":"pl-c1"}],[],[{"start":1,"end":8,"cssClass":"pl-en"},{"start":9,"end":13,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":21,"end":22,"cssClass":"pl-s1"}],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":23,"cssClass":"pl-s1"},{"start":24,"end":25,"cssClass":"pl-c1"},{"start":26,"end":27,"cssClass":"pl-c1"},{"start":29,"end":30,"cssClass":"pl-s1"},{"start":30,"end":32,"cssClass":"pl-c1"}],[],[{"start":2,"end":5,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":14,"cssClass":"pl-c1"},{"start":16,"end":17,"cssClass":"pl-s1"},{"start":18,"end":19,"cssClass":"pl-c1"},{"start":20,"end":21,"cssClass":"pl-c1"},{"start":23,"end":25,"cssClass":"pl-c1"},{"start":25,"end":26,"cssClass":"pl-s1"}],[],[{"start":3,"end":5,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-s1"},{"start":12,"end":13,"cssClass":"pl-s1"},{"start":15,"end":17,"cssClass":"pl-c1"},{"start":18,"end":21,"cssClass":"pl-c1"}],[{"start":4,"end":9,"cssClass":"pl-k"}],[{"start":3,"end":4,"cssClass":"pl-s1"},{"start":5,"end":6,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-c1"}],[],[{"start":2,"end":8,"cssClass":"pl-en"},{"start":9,"end":15,"cssClass":"pl-s"},{"start":17,"end":18,"cssClass":"pl-s1"},{"start":19,"end":20,"cssClass":"pl-s1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-s1"}],[],[{"start":1,"end":5,"cssClass":"pl-en"},{"start":6,"end":7,"cssClass":"pl-s1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/alx-tools/0x1C.c/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null},"displayName":"binary_tree_print.c","displayUrl":"https://github.com/alx-tools/0x1C.c/blob/master/binary_tree_print.c?raw=true","headerInfo":{"blobSize":"2.21 KB","deleteTooltip":"You must be signed in to make or propose changes","editTooltip":"You must be signed in to make or propose changes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","isGitLfs":false,"gitLfsPath":null,"onBranch":true,"shortPath":"010fccb","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Falx-tools%2F0x1C.c%2Fblob%2Fmaster%2Fbinary_tree_print.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"99","truncatedSloc":"92"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/alx-tools/0x1C.c/blob/master/binary_tree_print.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","releasePath":"/alx-tools/0x1C.c/releases/new?marketplace=true","showPublishActionBanner":false},"rawBlobUrl":"https://github.com/alx-tools/0x1C.c/raw/master/binary_tree_print.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"symbolsEnabled":true,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"alx-tools","repoName":"0x1C.c","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timed_out":false,"not_analyzed":false,"symbols":[{"name":"print_t","kind":"function","ident_start":405,"ident_end":412,"extent_start":405,"extent_end":472,"fully_qualified_name":"print_t","ident_utf16":{"start":{"line_number":17,"utf16_col":11},"end":{"line_number":17,"utf16_col":18}},"extent_utf16":{"start":{"line_number":17,"utf16_col":11},"end":{"line_number":17,"utf16_col":78}}},{"name":"_height","kind":"function","ident_start":1390,"ident_end":1397,"extent_start":1390,"extent_end":1424,"fully_qualified_name":"_height","ident_utf16":{"start":{"line_number":52,"utf16_col":14},"end":{"line_number":52,"utf16_col":21}},"extent_utf16":{"start":{"line_number":52,"utf16_col":14},"end":{"line_number":52,"utf16_col":48}}},{"name":"binary_tree_print","kind":"function","ident_start":1746,"ident_end":1763,"extent_start":1746,"extent_end":1790,"fully_qualified_name":"binary_tree_print","ident_utf16":{"start":{"line_number":67,"utf16_col":5},"end":{"line_number":67,"utf16_col":22}},"extent_utf16":{"start":{"line_number":67,"utf16_col":5},"end":{"line_number":67,"utf16_col":49}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/alx-tools/0x1C.c/branches":{"post":"JHMTDbt_IEaPi9-QQWSxXEac-il36cUFUYibwhKYMfz_Gnld8m9B-tMfIqk99P0s8ONpDH6hR5mlc_8PXVeTHg"},"/repos/preferences":{"post":"80cAo-OSMhliZ7uNa47SfCpOlmt8MdeXca0vfzuAPc0LhzljPi3LJ9FmUl1Tqxm0JdSheEL0nT_DXpotxpGcrw"}}},"title":"0x1C.c/binary_tree_print.c at master · alx-tools/0x1C.c"}