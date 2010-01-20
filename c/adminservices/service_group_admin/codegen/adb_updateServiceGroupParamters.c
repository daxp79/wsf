

        /**
         * adb_updateServiceGroupParamters.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_updateServiceGroupParamters.h"
        
               /*
                * implmentation of the updateServiceGroupParamters|http://org.apache.axis2/xsd element
                */
           


        struct adb_updateServiceGroupParamters
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            axis2_char_t* property_serviceGroupName;

                
                axis2_bool_t is_valid_serviceGroupName;
            axutil_array_list_t* property_params;

                
                axis2_bool_t is_valid_params;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_updateServiceGroupParamters_t* AXIS2_CALL
        adb_updateServiceGroupParamters_create(
            const axutil_env_t *env)
        {
            adb_updateServiceGroupParamters_t *_updateServiceGroupParamters = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _updateServiceGroupParamters = (adb_updateServiceGroupParamters_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_updateServiceGroupParamters_t));

            if(NULL == _updateServiceGroupParamters)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_updateServiceGroupParamters, 0, sizeof(adb_updateServiceGroupParamters_t));

            _updateServiceGroupParamters->property_Type = axutil_strdup(env, "adb_updateServiceGroupParamters");
            _updateServiceGroupParamters->property_serviceGroupName  = NULL;
                  _updateServiceGroupParamters->is_valid_serviceGroupName  = AXIS2_FALSE;
            _updateServiceGroupParamters->property_params  = NULL;
                  _updateServiceGroupParamters->is_valid_params  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "updateServiceGroupParamters",
                        "http://org.apache.axis2/xsd",
                        NULL);
                _updateServiceGroupParamters->qname = qname;
            

            return _updateServiceGroupParamters;
        }

        adb_updateServiceGroupParamters_t* AXIS2_CALL
        adb_updateServiceGroupParamters_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _serviceGroupName,
                axutil_array_list_t* _params)
        {
            adb_updateServiceGroupParamters_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_updateServiceGroupParamters_create(env);

            
              status = adb_updateServiceGroupParamters_set_serviceGroupName(
                                     adb_obj,
                                     env,
                                     _serviceGroupName);
              if(status == AXIS2_FAILURE) {
                  adb_updateServiceGroupParamters_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_updateServiceGroupParamters_set_params(
                                     adb_obj,
                                     env,
                                     _params);
              if(status == AXIS2_FAILURE) {
                  adb_updateServiceGroupParamters_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_updateServiceGroupParamters_free_popping_value(
                        adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _updateServiceGroupParamters->property_serviceGroupName;

                    _updateServiceGroupParamters->property_serviceGroupName = (axis2_char_t*)NULL;
                    adb_updateServiceGroupParamters_free(_updateServiceGroupParamters, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_updateServiceGroupParamters_free(
                adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                const axutil_env_t *env)
        {
            
            
            return adb_updateServiceGroupParamters_free_obj(
                _updateServiceGroupParamters,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_updateServiceGroupParamters_free_obj(
                adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);

            if (_updateServiceGroupParamters->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _updateServiceGroupParamters->property_Type);
            }

            adb_updateServiceGroupParamters_reset_serviceGroupName(_updateServiceGroupParamters, env);
            adb_updateServiceGroupParamters_reset_params(_updateServiceGroupParamters, env);
            
              if(_updateServiceGroupParamters->qname)
              {
                  axutil_qname_free (_updateServiceGroupParamters->qname, env);
                  _updateServiceGroupParamters->qname = NULL;
              }
            

            if(_updateServiceGroupParamters)
            {
                AXIS2_FREE(env->allocator, _updateServiceGroupParamters);
                _updateServiceGroupParamters = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_updateServiceGroupParamters_deserialize(
                adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_updateServiceGroupParamters_deserialize_obj(
                _updateServiceGroupParamters,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_updateServiceGroupParamters_deserialize_obj(
                adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for updateServiceGroupParamters : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _updateServiceGroupParamters-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for updateServiceGroupParamters : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_updateServiceGroupParamters-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building serviceGroupName element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "serviceGroupName", "http://org.apache.axis2/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_updateServiceGroupParamters_set_serviceGroupName(_updateServiceGroupParamters, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for serviceGroupName ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building params array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building params element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "params", "http://org.apache.axis2/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_ParameterMetaData_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_ParameterMetaData");
                                          
                                          status =  adb_ParameterMetaData_deserialize((adb_ParameterMetaData_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element params ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for params ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "params (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_updateServiceGroupParamters_set_params(_updateServiceGroupParamters, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_updateServiceGroupParamters_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_updateServiceGroupParamters_declare_parent_namespaces(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_updateServiceGroupParamters_serialize(
                adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_updateServiceGroupParamters_serialize_obj(
                    _updateServiceGroupParamters, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_updateServiceGroupParamters_serialize_obj(
                adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://org.apache.axis2/xsd",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "updateServiceGroupParamters", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://org.apache.axis2/xsd",
                                            p_prefix));
                       }
                      

                   if (!_updateServiceGroupParamters->is_valid_serviceGroupName)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("serviceGroupName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("serviceGroupName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing serviceGroupName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sserviceGroupName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sserviceGroupName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _updateServiceGroupParamters->property_serviceGroupName;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://org.apache.axis2/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://org.apache.axis2/xsd",
                                            p_prefix));
                       }
                      

                   if (!_updateServiceGroupParamters->is_valid_params)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("params"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("params")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing params array
                      */
                     if (_updateServiceGroupParamters->property_params != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sparams",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sparams>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_updateServiceGroupParamters->property_params, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing params element
                      */

                    
                     
                            if(!adb_ParameterMetaData_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_ParameterMetaData_serialize((adb_ParameterMetaData_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_ParameterMetaData_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_ParameterMetaData_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for serviceGroupName by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_updateServiceGroupParamters_get_property1(
                adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                const axutil_env_t *env)
            {
                return adb_updateServiceGroupParamters_get_serviceGroupName(_updateServiceGroupParamters,
                                             env);
            }

            /**
             * getter for serviceGroupName.
             */
            axis2_char_t* AXIS2_CALL
            adb_updateServiceGroupParamters_get_serviceGroupName(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, NULL);
                  

                return _updateServiceGroupParamters->property_serviceGroupName;
             }

            /**
             * setter for serviceGroupName
             */
            axis2_status_t AXIS2_CALL
            adb_updateServiceGroupParamters_set_serviceGroupName(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_serviceGroupName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);
                
                if(_updateServiceGroupParamters->is_valid_serviceGroupName &&
                        arg_serviceGroupName == _updateServiceGroupParamters->property_serviceGroupName)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_updateServiceGroupParamters_reset_serviceGroupName(_updateServiceGroupParamters, env);

                
                if(NULL == arg_serviceGroupName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _updateServiceGroupParamters->property_serviceGroupName = (axis2_char_t *)axutil_strdup(env, arg_serviceGroupName);
                        if(NULL == _updateServiceGroupParamters->property_serviceGroupName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for serviceGroupName");
                            return AXIS2_FAILURE;
                        }
                        _updateServiceGroupParamters->is_valid_serviceGroupName = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for serviceGroupName
            */
           axis2_status_t AXIS2_CALL
           adb_updateServiceGroupParamters_reset_serviceGroupName(
                   adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);
               

               
            
                
                if(_updateServiceGroupParamters->property_serviceGroupName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _updateServiceGroupParamters->property_serviceGroupName);
                     _updateServiceGroupParamters->property_serviceGroupName = NULL;
                }
            
                
                
                _updateServiceGroupParamters->is_valid_serviceGroupName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether serviceGroupName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_updateServiceGroupParamters_is_serviceGroupName_nil(
                   adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_TRUE);
               
               return !_updateServiceGroupParamters->is_valid_serviceGroupName;
           }

           /**
            * Set serviceGroupName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_updateServiceGroupParamters_set_serviceGroupName_nil(
                   adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                   const axutil_env_t *env)
           {
               return adb_updateServiceGroupParamters_reset_serviceGroupName(_updateServiceGroupParamters, env);
           }

           

            /**
             * Getter for params by  Property Number 2
             */
            axutil_array_list_t* AXIS2_CALL
            adb_updateServiceGroupParamters_get_property2(
                adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                const axutil_env_t *env)
            {
                return adb_updateServiceGroupParamters_get_params(_updateServiceGroupParamters,
                                             env);
            }

            /**
             * getter for params.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_updateServiceGroupParamters_get_params(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, NULL);
                  

                return _updateServiceGroupParamters->property_params;
             }

            /**
             * setter for params
             */
            axis2_status_t AXIS2_CALL
            adb_updateServiceGroupParamters_set_params(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_params)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);
                
                if(_updateServiceGroupParamters->is_valid_params &&
                        arg_params == _updateServiceGroupParamters->property_params)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_params, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "params has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_params, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_updateServiceGroupParamters_reset_params(_updateServiceGroupParamters, env);

                
                if(NULL == arg_params)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _updateServiceGroupParamters->property_params = arg_params;
                        if(non_nil_exists)
                        {
                            _updateServiceGroupParamters->is_valid_params = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of params.
             */
            adb_ParameterMetaData_t* AXIS2_CALL
            adb_updateServiceGroupParamters_get_params_at(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env, int i)
            {
                adb_ParameterMetaData_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, NULL);
                  

                if(_updateServiceGroupParamters->property_params == NULL)
                {
                    return (adb_ParameterMetaData_t*)0;
                }
                ret_val = (adb_ParameterMetaData_t*)axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of params.
             */
            axis2_status_t AXIS2_CALL
            adb_updateServiceGroupParamters_set_params_at(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env, int i,
                    adb_ParameterMetaData_t* arg_params)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);
                
                if( _updateServiceGroupParamters->is_valid_params &&
                    _updateServiceGroupParamters->property_params &&
                
                    arg_params == (adb_ParameterMetaData_t*)axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_params)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_updateServiceGroupParamters->property_params != NULL)
                        {
                            size = axutil_array_list_size(_updateServiceGroupParamters->property_params, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_updateServiceGroupParamters->property_params == NULL)
                {
                    _updateServiceGroupParamters->property_params = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_ParameterMetaData_free((adb_ParameterMetaData_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _updateServiceGroupParamters->is_valid_params = AXIS2_FALSE;
                        axutil_array_list_set(_updateServiceGroupParamters->property_params , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_updateServiceGroupParamters->property_params , env, i, arg_params);
                  _updateServiceGroupParamters->is_valid_params = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to params.
             */
            axis2_status_t AXIS2_CALL
            adb_updateServiceGroupParamters_add_params(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env,
                    adb_ParameterMetaData_t* arg_params)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);

                
                    if(NULL == arg_params)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_updateServiceGroupParamters->property_params == NULL)
                {
                    _updateServiceGroupParamters->property_params = axutil_array_list_create(env, 10);
                }
                if(_updateServiceGroupParamters->property_params == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for params");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_updateServiceGroupParamters->property_params , env, arg_params);
                  _updateServiceGroupParamters->is_valid_params = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the params array.
             */
            int AXIS2_CALL
            adb_updateServiceGroupParamters_sizeof_params(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, -1);
                if(_updateServiceGroupParamters->property_params == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_updateServiceGroupParamters->property_params, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_updateServiceGroupParamters_remove_params_at(
                    adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                    const axutil_env_t *env, int i)
            {
                return adb_updateServiceGroupParamters_set_params_nil_at(_updateServiceGroupParamters, env, i);
            }

            

           /**
            * resetter for params
            */
           axis2_status_t AXIS2_CALL
           adb_updateServiceGroupParamters_reset_params(
                   adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);
               

               
                  if (_updateServiceGroupParamters->property_params != NULL)
                  {
                      count = axutil_array_list_size(_updateServiceGroupParamters->property_params, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_ParameterMetaData_free((adb_ParameterMetaData_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_updateServiceGroupParamters->property_params, env);
                  }
                _updateServiceGroupParamters->is_valid_params = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether params is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_updateServiceGroupParamters_is_params_nil(
                   adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_TRUE);
               
               return !_updateServiceGroupParamters->is_valid_params;
           }

           /**
            * Set params to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_updateServiceGroupParamters_set_params_nil(
                   adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                   const axutil_env_t *env)
           {
               return adb_updateServiceGroupParamters_reset_params(_updateServiceGroupParamters, env);
           }

           
           /**
            * Check whether params is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_updateServiceGroupParamters_is_params_nil_at(
                   adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_TRUE);
               
               return (_updateServiceGroupParamters->is_valid_params == AXIS2_FALSE ||
                        NULL == _updateServiceGroupParamters->property_params || 
                        NULL == axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i));
           }

           /**
            * Set params to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_updateServiceGroupParamters_set_params_nil_at(
                   adb_updateServiceGroupParamters_t* _updateServiceGroupParamters,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _updateServiceGroupParamters, AXIS2_FAILURE);

                if(_updateServiceGroupParamters->property_params == NULL ||
                            _updateServiceGroupParamters->is_valid_params == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_updateServiceGroupParamters->property_params, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of params is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_updateServiceGroupParamters->property_params == NULL)
                {
                    _updateServiceGroupParamters->is_valid_params = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_updateServiceGroupParamters->property_params, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_ParameterMetaData_free((adb_ParameterMetaData_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _updateServiceGroupParamters->is_valid_params = AXIS2_FALSE;
                        axutil_array_list_set(_updateServiceGroupParamters->property_params , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_updateServiceGroupParamters->property_params , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

