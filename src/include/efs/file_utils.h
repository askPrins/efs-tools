/**
 * Copyright (C) 2013 Intel Corporation, All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Catalin Ionita <catalin.ionita@intel.com>
 */

#ifndef EFS_FILE_UTILS_H
#define EFS_FILE_UTILS_H
/*Add log functions*/

#define MAX_PATH_LENGTH 1024
#define MAX_FILE_LENGTH 256

#include <utils/Log.h>
#include <android/log.h>
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)

static const char property_prefix[] = "efs.encrypt.progress_";
#define SHA_HEAD 10

int check_space(const char *path);
int copy_dir_content(const char *src_path, const char *dest_path);
int remove_dir_content(const char *path);
int remove_dir(const char *path);
int get_dir_size(const char *path, off64_t * size);
#endif /* EFS_FILE_UTILS_H */
