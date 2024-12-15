
/*
This inline function was automatically generated using DecisionTreeToCpp Converter

It takes feature vector as single argument:
feature_vector[0] - Mean
feature_vector[1] - MaxValue
feature_vector[2] - Variance
feature_vector[3] - Kurtosis
feature_vector[4] - Skew
feature_vector[5] - FundFreq
feature_vector[6] - MFCC1
feature_vector[7] - MFCC2
feature_vector[8] - MFCC3


It returns index of predicted class:
0 - Choro
1 - Aleat�rio
2 - Sil�ncio
3 - Quase Choro


Simply include this file to your project and use it
*/

#include <vector>

inline int model2(const std::vector<double> & feature_vector) 
{
	if (feature_vector.at(1) <= 0.0644136518239975) {
		if (feature_vector.at(1) <= 0.04140540026128292) {
			if (feature_vector.at(0) <= 5.80078485654667e-05) {
				if (feature_vector.at(4) <= -0.24564799666404724) {
					if (feature_vector.at(7) <= -8.039759874343872) {
						return 2;
					}
					else {
						return 1;
					}
				}
				else {
					return 2;
				}
			}
			else {
				if (feature_vector.at(0) <= 5.900524956814479e-05) {
					return 1;
				}
				else {
					return 2;
				}
			}
		}
		else {
			if (feature_vector.at(8) <= 4.828890085220337) {
				if (feature_vector.at(6) <= -32.595951080322266) {
					return 1;
				}
				else {
					return 2;
				}
			}
			else {
				if (feature_vector.at(7) <= -14.762799739837646) {
					return 3;
				}
				else {
					if (feature_vector.at(5) <= 40.491450786590576) {
						return 1;
					}
					else {
						if (feature_vector.at(3) <= 0.19898249953985214) {
							if (feature_vector.at(5) <= 206.69000244140625) {
								return 2;
							}
							else {
								return 1;
							}
						}
						else {
							return 2;
						}
					}
				}
			}
		}
	}
	else {
		if (feature_vector.at(6) <= -40.87014961242676) {
			if (feature_vector.at(7) <= -5.101874828338623) {
				if (feature_vector.at(3) <= 25.79135036468506) {
					if (feature_vector.at(7) <= -12.827649593353271) {
						if (feature_vector.at(2) <= 0.0004530535079538822) {
							if (feature_vector.at(6) <= -66.06109809875488) {
								return 3;
							}
							else {
								if (feature_vector.at(4) <= 0.6154879927635193) {
									if (feature_vector.at(7) <= -21.007200241088867) {
										return 0;
									}
									else {
										if (feature_vector.at(0) <= 4.507729954639217e-06) {
											return 1;
										}
										else {
											if (feature_vector.at(6) <= -51.50345039367676) {
												return 0;
											}
											else {
												return 1;
											}
										}
									}
								}
								else {
									return 0;
								}
							}
						}
						else {
							if (feature_vector.at(3) <= -0.5206114947795868) {
								if (feature_vector.at(5) <= 2149.6600341796875) {
									if (feature_vector.at(1) <= 0.24156899750232697) {
										if (feature_vector.at(0) <= -1.6779204315753304e-05) {
											return 1;
										}
										else {
											return 0;
										}
									}
									else {
										if (feature_vector.at(0) <= -5.954014881126568e-08) {
											return 0;
										}
										else {
											return 3;
										}
									}
								}
								else {
									return 3;
								}
							}
							else {
								if (feature_vector.at(0) <= -0.0001283035016967915) {
									if (feature_vector.at(8) <= 4.839044809341431) {
										return 0;
									}
									else {
										if (feature_vector.at(1) <= 0.7248755097389221) {
											if (feature_vector.at(4) <= 0.07861125096678734) {
												return 1;
											}
											else {
												if (feature_vector.at(3) <= 2.9118850231170654) {
													return 1;
												}
												else {
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(6) <= -43.528249740600586) {
												if (feature_vector.at(2) <= 0.1195945031940937) {
													return 3;
												}
												else {
													return 1;
												}
											}
											else {
												return 0;
											}
										}
									}
								}
								else {
									if (feature_vector.at(4) <= 1.2543950080871582) {
										if (feature_vector.at(5) <= 124.15750122070312) {
											if (feature_vector.at(2) <= 0.0023196650436148047) {
												return 1;
											}
											else {
												if (feature_vector.at(1) <= 0.7794885039329529) {
													return 0;
												}
												else {
													if (feature_vector.at(7) <= -14.846650123596191) {
														return 3;
													}
													else {
														return 1;
													}
												}
											}
										}
										else {
											if (feature_vector.at(8) <= 10.176819801330566) {
												if (feature_vector.at(3) <= 6.6376051902771) {
													if (feature_vector.at(0) <= 0.0003016849950654432) {
														if (feature_vector.at(1) <= 0.10446449741721153) {
															return 2;
														}
														else {
															if (feature_vector.at(8) <= -1.1075549721717834) {
																return 1;
															}
															else {
																if (feature_vector.at(8) <= 7.351525068283081) {
																	if (feature_vector.at(2) <= 0.0014754949952475727) {
																		if (feature_vector.at(0) <= -3.019440009666141e-05) {
																			if (feature_vector.at(5) <= 191.60650634765625) {
																				return 0;
																			}
																			else {
																				return 1;
																			}
																		}
																		else {
																			if (feature_vector.at(3) <= 1.0738199949264526) {
																				if (feature_vector.at(3) <= 0.4277950585819781) {
																					return 0;
																				}
																				else {
																					return 2;
																				}
																			}
																			else {
																				if (feature_vector.at(6) <= -47.740949630737305) {
																					return 0;
																				}
																				else {
																					if (feature_vector.at(2) <= 0.0006595860177185386) {
																						return 1;
																					}
																					else {
																						return 0;
																					}
																				}
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(6) <= -41.19725036621094) {
																			if (feature_vector.at(3) <= -0.21835950016975403) {
																				if (feature_vector.at(8) <= 6.827205181121826) {
																					return 0;
																				}
																				else {
																					return 3;
																				}
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			if (feature_vector.at(6) <= -41.135549545288086) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																}
																else {
																	if (feature_vector.at(2) <= 0.026893099769949913) {
																		if (feature_vector.at(5) <= 2291.0899658203125) {
																			if (feature_vector.at(2) <= 0.0009191310091409832) {
																				if (feature_vector.at(2) <= 0.0008111549832392484) {
																					return 0;
																				}
																				else {
																					return 2;
																				}
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			return 3;
																		}
																	}
																	else {
																		return 3;
																	}
																}
															}
														}
													}
													else {
														if (feature_vector.at(8) <= 7.317219972610474) {
															return 3;
														}
														else {
															return 0;
														}
													}
												}
												else {
													if (feature_vector.at(7) <= -14.216899871826172) {
														if (feature_vector.at(6) <= -45.653900146484375) {
															if (feature_vector.at(0) <= 1.704929945844924e-05) {
																return 0;
															}
															else {
																if (feature_vector.at(0) <= 1.7865149857243523e-05) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
														}
														else {
															if (feature_vector.at(0) <= -9.650580068409909e-06) {
																if (feature_vector.at(5) <= 1021.9754943847656) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
															else {
																if (feature_vector.at(6) <= -42.81144905090332) {
																	return 0;
																}
																else {
																	if (feature_vector.at(4) <= 0.0859184991568327) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
															}
														}
													}
													else {
														if (feature_vector.at(1) <= 0.6952120065689087) {
															if (feature_vector.at(2) <= 0.0027113399701192975) {
																if (feature_vector.at(6) <= -50.31399917602539) {
																	if (feature_vector.at(5) <= 495.1605224609375) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	return 1;
																}
															}
															else {
																if (feature_vector.at(3) <= 6.911360025405884) {
																	if (feature_vector.at(3) <= 6.8313000202178955) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	return 0;
																}
															}
														}
														else {
															if (feature_vector.at(7) <= -13.081850051879883) {
																return 1;
															}
															else {
																return 0;
															}
														}
													}
												}
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(3) <= 7.82342004776001) {
											if (feature_vector.at(6) <= -45.795148849487305) {
												return 0;
											}
											else {
												return 3;
											}
										}
										else {
											return 3;
										}
									}
								}
							}
						}
					}
					else {
						if (feature_vector.at(1) <= 0.970366507768631) {
							if (feature_vector.at(3) <= 0.4593059867620468) {
								if (feature_vector.at(6) <= -45.77980041503906) {
									if (feature_vector.at(7) <= -8.371425151824951) {
										if (feature_vector.at(6) <= -53.385398864746094) {
											if (feature_vector.at(5) <= 2331.3699951171875) {
												return 1;
											}
											else {
												return 3;
											}
										}
										else {
											if (feature_vector.at(5) <= 2914.77001953125) {
												if (feature_vector.at(0) <= -6.005529940011911e-05) {
													if (feature_vector.at(7) <= -9.686135292053223) {
														return 1;
													}
													else {
														if (feature_vector.at(2) <= 0.07671094872057438) {
															return 0;
														}
														else {
															return 1;
														}
													}
												}
												else {
													if (feature_vector.at(5) <= 308.5220031738281) {
														if (feature_vector.at(8) <= 6.911319971084595) {
															return 2;
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(0) <= 6.829589983681217e-05) {
															if (feature_vector.at(8) <= 4.608580112457275) {
																return 1;
															}
															else {
																if (feature_vector.at(5) <= 1986.9550170898438) {
																	return 0;
																}
																else {
																	if (feature_vector.at(4) <= 0.06491845101118088) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
															}
														}
														else {
															if (feature_vector.at(8) <= 7.306215047836304) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
												}
											}
											else {
												if (feature_vector.at(1) <= 0.2625050023198128) {
													return 1;
												}
												else {
													return 3;
												}
											}
										}
									}
									else {
										if (feature_vector.at(5) <= 422.94549560546875) {
											if (feature_vector.at(7) <= -6.4376349449157715) {
												return 0;
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(2) <= 0.001530674984678626) {
												return 0;
											}
											else {
												if (feature_vector.at(8) <= 7.669409990310669) {
													return 1;
												}
												else {
													if (feature_vector.at(5) <= 1068.5344848632812) {
														return 0;
													}
													else {
														return 1;
													}
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(1) <= 0.24895500391721725) {
										if (feature_vector.at(7) <= -9.645780086517334) {
											if (feature_vector.at(8) <= 8.453624725341797) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											return 3;
										}
									}
									else {
										if (feature_vector.at(3) <= -0.6486355066299438) {
											if (feature_vector.at(2) <= 0.02649520058184862) {
												if (feature_vector.at(3) <= -0.737234503030777) {
													return 1;
												}
												else {
													return 0;
												}
											}
											else {
												return 3;
											}
										}
										else {
											if (feature_vector.at(1) <= 0.8870970010757446) {
												if (feature_vector.at(5) <= 2742.3299560546875) {
													if (feature_vector.at(2) <= 0.004578520078212023) {
														return 3;
													}
													else {
														if (feature_vector.at(8) <= 2.91471004486084) {
															return 1;
														}
														else {
															return 0;
														}
													}
												}
												else {
													if (feature_vector.at(8) <= 6.684309959411621) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
											else {
												if (feature_vector.at(4) <= 0.026212335738819093) {
													if (feature_vector.at(2) <= 0.05699794925749302) {
														return 1;
													}
													else {
														return 0;
													}
												}
												else {
													return 3;
												}
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(3) <= 8.13993501663208) {
									if (feature_vector.at(6) <= -56.94799995422363) {
										if (feature_vector.at(2) <= 0.0011527774622663856) {
											return 0;
										}
										else {
											return 1;
										}
									}
									else {
										if (feature_vector.at(4) <= 0.07186559960246086) {
											if (feature_vector.at(4) <= -0.07138355076313019) {
												if (feature_vector.at(7) <= -12.817800045013428) {
													return 1;
												}
												else {
													if (feature_vector.at(5) <= 163.14950561523438) {
														if (feature_vector.at(5) <= 131.72350311279297) {
															return 1;
														}
														else {
															return 2;
														}
													}
													else {
														if (feature_vector.at(8) <= 4.923835039138794) {
															if (feature_vector.at(6) <= -43.41875076293945) {
																return 0;
															}
															else {
																if (feature_vector.at(4) <= -0.1860945001244545) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
														}
														else {
															if (feature_vector.at(6) <= -55.42815017700195) {
																if (feature_vector.at(3) <= 6.22241997718811) {
																	if (feature_vector.at(5) <= 269.7105026245117) {
																		return 3;
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	return 1;
																}
															}
															else {
																if (feature_vector.at(7) <= -5.882624864578247) {
																	if (feature_vector.at(1) <= 0.6170080006122589) {
																		if (feature_vector.at(8) <= 9.81180477142334) {
																			if (feature_vector.at(6) <= -52.365699768066406) {
																				if (feature_vector.at(4) <= -0.14343100041151047) {
																					return 0;
																				}
																				else {
																					return 1;
																				}
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			if (feature_vector.at(8) <= 10.19005012512207) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(2) <= 0.013171149883419275) {
																			return 1;
																		}
																		else {
																			if (feature_vector.at(1) <= 0.6330150067806244) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																}
																else {
																	if (feature_vector.at(0) <= -0.0003222679024474928) {
																		return 0;
																	}
																	else {
																		return 1;
																	}
																}
															}
														}
													}
												}
											}
											else {
												if (feature_vector.at(6) <= -45.150550842285156) {
													if (feature_vector.at(0) <= 2.1290500171744497e-06) {
														if (feature_vector.at(1) <= 0.7257759869098663) {
															if (feature_vector.at(6) <= -51.9109992980957) {
																if (feature_vector.at(5) <= 390.24449157714844) {
																	return 0;
																}
																else {
																	if (feature_vector.at(3) <= 1.2817099690437317) {
																		if (feature_vector.at(4) <= 0.032490599900484085) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		return 1;
																	}
																}
															}
															else {
																if (feature_vector.at(8) <= 6.94997501373291) {
																	if (feature_vector.at(2) <= 0.017409749794751406) {
																		if (feature_vector.at(3) <= 1.7300949692726135) {
																			return 0;
																		}
																		else {
																			if (feature_vector.at(4) <= 0.047561900690197945) {
																				return 1;
																			}
																			else {
																				if (feature_vector.at(3) <= 2.5949900150299072) {
																					return 1;
																				}
																				else {
																					return 0;
																				}
																			}
																		}
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	if (feature_vector.at(6) <= -47.31554985046387) {
																		if (feature_vector.at(7) <= -7.963710069656372) {
																			return 0;
																		}
																		else {
																			if (feature_vector.at(3) <= 1.7790799736976624) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(7) <= -8.158179998397827) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																}
															}
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(8) <= 5.418844938278198) {
															return 1;
														}
														else {
															if (feature_vector.at(8) <= 8.067594766616821) {
																if (feature_vector.at(1) <= 0.11700799688696861) {
																	return 2;
																}
																else {
																	return 0;
																}
															}
															else {
																if (feature_vector.at(0) <= 3.625015051511582e-05) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
														}
													}
												}
												else {
													if (feature_vector.at(8) <= 4.6485748291015625) {
														return 1;
													}
													else {
														if (feature_vector.at(2) <= 0.042667750269174576) {
															if (feature_vector.at(2) <= 0.0025416649878025055) {
																if (feature_vector.at(6) <= -43.63229942321777) {
																	if (feature_vector.at(1) <= 0.16112250089645386) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	if (feature_vector.at(6) <= -40.92989921569824) {
																		return 3;
																	}
																	else {
																		return 0;
																	}
																}
															}
															else {
																if (feature_vector.at(3) <= 6.818749904632568) {
																	if (feature_vector.at(4) <= -0.06819085031747818) {
																		return 1;
																	}
																	else {
																		if (feature_vector.at(1) <= 0.28060249984264374) {
																			if (feature_vector.at(5) <= 735.5595092773438) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			return 0;
																		}
																	}
																}
																else {
																	return 3;
																}
															}
														}
														else {
															if (feature_vector.at(7) <= -11.096950054168701) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 339.0084991455078) {
												if (feature_vector.at(1) <= 0.36207200586795807) {
													if (feature_vector.at(8) <= 7.252254962921143) {
														return 1;
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(4) <= 1.7820799946784973) {
														return 3;
													}
													else {
														return 0;
													}
												}
											}
											else {
												if (feature_vector.at(0) <= 0.000415056012570858) {
													if (feature_vector.at(2) <= 0.000862262473674491) {
														return 1;
													}
													else {
														if (feature_vector.at(7) <= -5.909150123596191) {
															if (feature_vector.at(1) <= 0.969496488571167) {
																if (feature_vector.at(8) <= 11.722599983215332) {
																	if (feature_vector.at(5) <= 389.60350036621094) {
																		if (feature_vector.at(0) <= 2.248839973617578e-05) {
																			if (feature_vector.at(2) <= 0.05869454890489578) {
																				return 0;
																			}
																			else {
																				return 3;
																			}
																		}
																		else {
																			if (feature_vector.at(2) <= 0.014704609755426645) {
																				return 1;
																			}
																			else {
																				return 3;
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(8) <= 3.4332499504089355) {
																			if (feature_vector.at(8) <= 3.3403199911117554) {
																				return 0;
																			}
																			else {
																				return 1;
																			}
																		}
																		else {
																			if (feature_vector.at(3) <= 0.5722255110740662) {
																				if (feature_vector.at(8) <= 7.182715177536011) {
																					return 0;
																				}
																				else {
																					return 1;
																				}
																			}
																			else {
																				if (feature_vector.at(6) <= -54.95720100402832) {
																					if (feature_vector.at(5) <= 1365.6399841308594) {
																						return 0;
																					}
																					else {
																						return 1;
																					}
																				}
																				else {
																					if (feature_vector.at(4) <= 0.09511354938149452) {
																						if (feature_vector.at(4) <= 0.0929451510310173) {
																							if (feature_vector.at(5) <= 440.4659881591797) {
																								if (feature_vector.at(1) <= 0.4055144935846329) {
																									return 1;
																								}
																								else {
																									return 0;
																								}
																							}
																							else {
																								return 0;
																							}
																						}
																						else {
																							return 1;
																						}
																					}
																					else {
																						if (feature_vector.at(3) <= 7.445590019226074) {
																							return 0;
																						}
																						else {
																							if (feature_vector.at(3) <= 7.555480003356934) {
																								return 3;
																							}
																							else {
																								return 0;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
																else {
																	return 1;
																}
															}
															else {
																return 1;
															}
														}
														else {
															if (feature_vector.at(6) <= -46.3799991607666) {
																return 1;
															}
															else {
																return 0;
															}
														}
													}
												}
												else {
													if (feature_vector.at(1) <= 0.2752920091152191) {
														return 1;
													}
													else {
														return 3;
													}
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(8) <= 6.358720064163208) {
										if (feature_vector.at(6) <= -41.715599060058594) {
											if (feature_vector.at(0) <= -7.59033027861733e-05) {
												if (feature_vector.at(3) <= 14.474800109863281) {
													return 0;
												}
												else {
													if (feature_vector.at(7) <= -7.559340000152588) {
														return 1;
													}
													else {
														if (feature_vector.at(0) <= -0.0005140075154486112) {
															return 0;
														}
														else {
															return 1;
														}
													}
												}
											}
											else {
												if (feature_vector.at(4) <= -1.1198520064353943) {
													return 0;
												}
												else {
													if (feature_vector.at(2) <= 0.02365229930728674) {
														return 1;
													}
													else {
														if (feature_vector.at(6) <= -43.192501068115234) {
															return 1;
														}
														else {
															return 0;
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(8) <= 5.0897650718688965) {
												return 1;
											}
											else {
												if (feature_vector.at(7) <= -10.836114883422852) {
													return 3;
												}
												else {
													return 0;
												}
											}
										}
									}
									else {
										if (feature_vector.at(6) <= -59.67815017700195) {
											if (feature_vector.at(0) <= 5.8744150010170415e-05) {
												return 1;
											}
											else {
												return 3;
											}
										}
										else {
											if (feature_vector.at(7) <= -12.139900207519531) {
												if (feature_vector.at(0) <= 1.8250600078317802e-05) {
													if (feature_vector.at(7) <= -12.559450149536133) {
														return 0;
													}
													else {
														if (feature_vector.at(6) <= -57.08835029602051) {
															return 0;
														}
														else {
															return 1;
														}
													}
												}
												else {
													if (feature_vector.at(0) <= 4.1448851334280334e-05) {
														return 3;
													}
													else {
														return 0;
													}
												}
											}
											else {
												if (feature_vector.at(4) <= 1.5530049800872803) {
													if (feature_vector.at(1) <= 0.7493515014648438) {
														if (feature_vector.at(2) <= 0.0023364899680018425) {
															if (feature_vector.at(1) <= 0.40940549969673157) {
																if (feature_vector.at(0) <= -0.0004564419941743836) {
																	return 1;
																}
																else {
																	if (feature_vector.at(8) <= 8.931379795074463) {
																		if (feature_vector.at(1) <= 0.2382275015115738) {
																			if (feature_vector.at(2) <= 0.0003065255004912615) {
																				if (feature_vector.at(8) <= 7.9398298263549805) {
																					return 1;
																				}
																				else {
																					if (feature_vector.at(0) <= -1.428319956175983e-05) {
																						return 2;
																					}
																					else {
																						return 0;
																					}
																				}
																			}
																			else {
																				if (feature_vector.at(8) <= 7.4179699420928955) {
																					if (feature_vector.at(4) <= -0.431521013379097) {
																						return 0;
																					}
																					else {
																						return 1;
																					}
																				}
																				else {
																					return 0;
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(3) <= 8.848035335540771) {
																				return 0;
																			}
																			else {
																				return 1;
																			}
																		}
																	}
																	else {
																		return 0;
																	}
																}
															}
															else {
																return 1;
															}
														}
														else {
															if (feature_vector.at(5) <= 3296.3350830078125) {
																if (feature_vector.at(6) <= -42.95389938354492) {
																	if (feature_vector.at(7) <= -6.02697491645813) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(5) <= 573.7875061035156) {
																			return 0;
																		}
																		else {
																			return 1;
																		}
																	}
																}
																else {
																	if (feature_vector.at(7) <= -8.934639930725098) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
															}
															else {
																return 1;
															}
														}
													}
													else {
														if (feature_vector.at(3) <= 16.38729953765869) {
															if (feature_vector.at(4) <= -0.10345800220966339) {
																return 0;
															}
															else {
																if (feature_vector.at(5) <= 2591.929931640625) {
																	return 1;
																}
																else {
																	return 3;
																}
															}
														}
														else {
															return 0;
														}
													}
												}
												else {
													if (feature_vector.at(8) <= 6.905320167541504) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
										}
									}
								}
							}
						}
						else {
							if (feature_vector.at(5) <= 524.3284912109375) {
								if (feature_vector.at(7) <= -6.471090078353882) {
									if (feature_vector.at(8) <= 10.068044662475586) {
										if (feature_vector.at(4) <= -0.062246399000287056) {
											if (feature_vector.at(7) <= -8.892650127410889) {
												return 3;
											}
											else {
												return 1;
											}
										}
										else {
											return 3;
										}
									}
									else {
										return 1;
									}
								}
								else {
									return 0;
								}
							}
							else {
								if (feature_vector.at(0) <= 7.137139982660301e-05) {
									if (feature_vector.at(3) <= 5.63242506980896) {
										if (feature_vector.at(4) <= -0.01421294966712594) {
											if (feature_vector.at(3) <= -0.0497489869594574) {
												return 1;
											}
											else {
												if (feature_vector.at(4) <= -0.023837699554860592) {
													return 0;
												}
												else {
													return 3;
												}
											}
										}
										else {
											return 0;
										}
									}
									else {
										if (feature_vector.at(0) <= -0.00016555649926885962) {
											if (feature_vector.at(2) <= 0.03433085046708584) {
												return 0;
											}
											else {
												if (feature_vector.at(3) <= 7.253859996795654) {
													return 3;
												}
												else {
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(3) <= 13.53030014038086) {
												return 1;
											}
											else {
												return 0;
											}
										}
									}
								}
								else {
									if (feature_vector.at(4) <= 0.07145630195736885) {
										if (feature_vector.at(7) <= -9.275480270385742) {
											return 0;
										}
										else {
											return 1;
										}
									}
									else {
										if (feature_vector.at(2) <= 0.15570849925279617) {
											return 3;
										}
										else {
											return 0;
										}
									}
								}
							}
						}
					}
				}
				else {
					if (feature_vector.at(7) <= -16.703399658203125) {
						if (feature_vector.at(3) <= 127.40750122070312) {
							if (feature_vector.at(8) <= 6.046319961547852) {
								return 0;
							}
							else {
								if (feature_vector.at(1) <= 0.2434460073709488) {
									if (feature_vector.at(4) <= -0.44513699412345886) {
										return 0;
									}
									else {
										return 2;
									}
								}
								else {
									return 1;
								}
							}
						}
						else {
							return 1;
						}
					}
					else {
						if (feature_vector.at(2) <= 0.0009473430109210312) {
							if (feature_vector.at(0) <= 4.3960702811318697e-07) {
								if (feature_vector.at(6) <= -41.09025001525879) {
									if (feature_vector.at(0) <= -0.0001099184992199298) {
										if (feature_vector.at(0) <= -0.0001235229974554386) {
											return 1;
										}
										else {
											if (feature_vector.at(3) <= 89.39749908447266) {
												return 0;
											}
											else {
												return 2;
											}
										}
									}
									else {
										return 1;
									}
								}
								else {
									if (feature_vector.at(5) <= 340.1165084838867) {
										return 1;
									}
									else {
										return 3;
									}
								}
							}
							else {
								if (feature_vector.at(7) <= -11.380099773406982) {
									if (feature_vector.at(1) <= 0.14726699516177177) {
										return 2;
									}
									else {
										if (feature_vector.at(3) <= 52.502052307128906) {
											return 0;
										}
										else {
											return 1;
										}
									}
								}
								else {
									return 1;
								}
							}
						}
						else {
							if (feature_vector.at(4) <= 0.6565444767475128) {
								if (feature_vector.at(3) <= 30.76954936981201) {
									if (feature_vector.at(4) <= -0.41015949845314026) {
										return 0;
									}
									else {
										if (feature_vector.at(1) <= 0.7222054898738861) {
											if (feature_vector.at(7) <= -11.421949863433838) {
												if (feature_vector.at(3) <= 29.17930030822754) {
													return 3;
												}
												else {
													return 1;
												}
											}
											else {
												return 0;
											}
										}
										else {
											return 1;
										}
									}
								}
								else {
									if (feature_vector.at(0) <= 6.135210060165264e-05) {
										return 1;
									}
									else {
										if (feature_vector.at(1) <= 0.8574939966201782) {
											return 0;
										}
										else {
											return 1;
										}
									}
								}
							}
							else {
								if (feature_vector.at(8) <= 7.809715032577515) {
									if (feature_vector.at(8) <= 4.938700199127197) {
										return 1;
									}
									else {
										if (feature_vector.at(4) <= 3.8230849504470825) {
											if (feature_vector.at(7) <= -6.740064859390259) {
												return 0;
											}
											else {
												return 1;
											}
										}
										else {
											return 3;
										}
									}
								}
								else {
									if (feature_vector.at(7) <= -16.379199981689453) {
										return 1;
									}
									else {
										return 3;
									}
								}
							}
						}
					}
				}
			}
			else {
				if (feature_vector.at(0) <= -0.00030104299366939813) {
					if (feature_vector.at(8) <= 9.28548002243042) {
						return 0;
					}
					else {
						return 1;
					}
				}
				else {
					if (feature_vector.at(2) <= 0.015952049754559994) {
						return 1;
					}
					else {
						if (feature_vector.at(5) <= 585.6840209960938) {
							if (feature_vector.at(0) <= -9.768194831849542e-05) {
								return 0;
							}
							else {
								return 3;
							}
						}
						else {
							if (feature_vector.at(0) <= -7.278504926944152e-05) {
								return 0;
							}
							else {
								return 1;
							}
						}
					}
				}
			}
		}
		else {
			if (feature_vector.at(8) <= 2.8357399702072144) {
				if (feature_vector.at(5) <= 245.447998046875) {
					if (feature_vector.at(7) <= -17.714749336242676) {
						if (feature_vector.at(0) <= -1.4640650078945328e-06) {
							if (feature_vector.at(8) <= 1.6672900319099426) {
								return 0;
							}
							else {
								return 1;
							}
						}
						else {
							return 1;
						}
					}
					else {
						if (feature_vector.at(2) <= 0.12167499959468842) {
							if (feature_vector.at(8) <= 2.8096699714660645) {
								if (feature_vector.at(6) <= -37.06180000305176) {
									if (feature_vector.at(3) <= -0.011566996574401855) {
										return 0;
									}
									else {
										return 1;
									}
								}
								else {
									return 1;
								}
							}
							else {
								if (feature_vector.at(2) <= 0.04665180016309023) {
									return 1;
								}
								else {
									return 3;
								}
							}
						}
						else {
							if (feature_vector.at(8) <= 2.269279956817627) {
								return 1;
							}
							else {
								return 3;
							}
						}
					}
				}
				else {
					if (feature_vector.at(2) <= 0.01819525007158518) {
						if (feature_vector.at(7) <= -18.06130027770996) {
							return 0;
						}
						else {
							if (feature_vector.at(8) <= 2.606260061264038) {
								if (feature_vector.at(4) <= 0.5571290105581284) {
									if (feature_vector.at(5) <= 255.83999633789062) {
										if (feature_vector.at(2) <= 0.009788005147129297) {
											return 1;
										}
										else {
											return 3;
										}
									}
									else {
										if (feature_vector.at(2) <= 0.01541550038382411) {
											return 1;
										}
										else {
											if (feature_vector.at(6) <= -32.12664985656738) {
												if (feature_vector.at(0) <= 8.338082105296962e-05) {
													return 1;
												}
												else {
													return 3;
												}
											}
											else {
												return 1;
											}
										}
									}
								}
								else {
									if (feature_vector.at(3) <= 21.21103000640869) {
										return 0;
									}
									else {
										return 1;
									}
								}
							}
							else {
								if (feature_vector.at(8) <= 2.629870057106018) {
									return 0;
								}
								else {
									if (feature_vector.at(0) <= 8.947679816628806e-05) {
										if (feature_vector.at(7) <= -5.7184247970581055) {
											return 1;
										}
										else {
											if (feature_vector.at(5) <= 473.2635040283203) {
												if (feature_vector.at(7) <= -5.217474937438965) {
													return 0;
												}
												else {
													return 3;
												}
											}
											else {
												return 1;
											}
										}
									}
									else {
										return 0;
									}
								}
							}
						}
					}
					else {
						if (feature_vector.at(7) <= -12.812749862670898) {
							if (feature_vector.at(6) <= -32.50955009460449) {
								return 0;
							}
							else {
								return 3;
							}
						}
						else {
							if (feature_vector.at(4) <= 0.23512499779462814) {
								if (feature_vector.at(8) <= 2.068674921989441) {
									if (feature_vector.at(5) <= 253.97900390625) {
										return 3;
									}
									else {
										if (feature_vector.at(3) <= -0.914295494556427) {
											if (feature_vector.at(6) <= -13.7646803855896) {
												return 3;
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(7) <= -8.991419792175293) {
												if (feature_vector.at(6) <= -25.452449798583984) {
													return 1;
												}
												else {
													return 3;
												}
											}
											else {
												return 1;
											}
										}
									}
								}
								else {
									if (feature_vector.at(2) <= 0.10522449761629105) {
										if (feature_vector.at(6) <= -27.534500122070312) {
											if (feature_vector.at(6) <= -32.023250579833984) {
												if (feature_vector.at(5) <= 2244.3599853515625) {
													if (feature_vector.at(7) <= -5.261924982070923) {
														return 1;
													}
													else {
														return 0;
													}
												}
												else {
													return 0;
												}
											}
											else {
												if (feature_vector.at(4) <= -0.2593767549842596) {
													return 0;
												}
												else {
													return 3;
												}
											}
										}
										else {
											return 1;
										}
									}
									else {
										if (feature_vector.at(3) <= -1.5087299942970276) {
											return 1;
										}
										else {
											return 3;
										}
									}
								}
							}
							else {
								if (feature_vector.at(1) <= 0.5893815159797668) {
									return 0;
								}
								else {
									return 3;
								}
							}
						}
					}
				}
			}
			else {
				if (feature_vector.at(5) <= 740.0130004882812) {
					if (feature_vector.at(2) <= 0.008746135048568249) {
						if (feature_vector.at(3) <= 6.7669548988342285) {
							if (feature_vector.at(5) <= 106.0629997253418) {
								if (feature_vector.at(7) <= -17.069049835205078) {
									return 0;
								}
								else {
									if (feature_vector.at(3) <= 6.66777491569519) {
										return 1;
									}
									else {
										return 0;
									}
								}
							}
							else {
								if (feature_vector.at(4) <= 0.6472220122814178) {
									if (feature_vector.at(3) <= 0.6930400133132935) {
										if (feature_vector.at(8) <= 3.571815013885498) {
											if (feature_vector.at(3) <= 0.37020599842071533) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(1) <= 0.13498300313949585) {
												return 1;
											}
											else {
												if (feature_vector.at(5) <= 665.1864929199219) {
													if (feature_vector.at(7) <= -11.212130069732666) {
														return 0;
													}
													else {
														if (feature_vector.at(1) <= 0.3980409950017929) {
															if (feature_vector.at(8) <= 3.610900044441223) {
																return 0;
															}
															else {
																if (feature_vector.at(8) <= 8.531915187835693) {
																	if (feature_vector.at(0) <= -0.001579041505465284) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(5) <= 214.63150024414062) {
																			if (feature_vector.at(4) <= 0.2439175397157669) {
																				return 1;
																			}
																			else {
																				return 3;
																			}
																		}
																		else {
																			if (feature_vector.at(3) <= 0.11355749890208244) {
																				if (feature_vector.at(8) <= 4.700030088424683) {
																					return 0;
																				}
																				else {
																					if (feature_vector.at(3) <= 0.08801715075969696) {
																						return 3;
																					}
																					else {
																						return 1;
																					}
																				}
																			}
																			else {
																				return 3;
																			}
																		}
																	}
																}
																else {
																	return 0;
																}
															}
														}
														else {
															return 1;
														}
													}
												}
												else {
													return 0;
												}
											}
										}
									}
									else {
										if (feature_vector.at(2) <= 0.005653440020978451) {
											if (feature_vector.at(4) <= 0.03835414908826351) {
												if (feature_vector.at(5) <= 325.65699768066406) {
													if (feature_vector.at(1) <= 0.43685048818588257) {
														if (feature_vector.at(2) <= 0.0014582900330424309) {
															if (feature_vector.at(2) <= 0.0008914160134736449) {
																return 1;
															}
															else {
																return 0;
															}
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(3) <= 2.692395031452179) {
															return 3;
														}
														else {
															return 1;
														}
													}
												}
												else {
													if (feature_vector.at(8) <= 5.682265043258667) {
														if (feature_vector.at(3) <= 2.6898900866508484) {
															if (feature_vector.at(1) <= 0.20407000184059143) {
																return 0;
															}
															else {
																if (feature_vector.at(5) <= 513.8329925537109) {
																	if (feature_vector.at(4) <= 0.008210247848182917) {
																		return 3;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	return 1;
																}
															}
														}
														else {
															if (feature_vector.at(4) <= -0.11821499839425087) {
																if (feature_vector.at(4) <= -0.4232820086181164) {
																	return 0;
																}
																else {
																	return 1;
																}
															}
															else {
																return 0;
															}
														}
													}
													else {
														if (feature_vector.at(3) <= 1.5125475525856018) {
															return 3;
														}
														else {
															return 1;
														}
													}
												}
											}
											else {
												if (feature_vector.at(6) <= -38.79210090637207) {
													if (feature_vector.at(8) <= 8.865030288696289) {
														return 1;
													}
													else {
														if (feature_vector.at(0) <= -9.927465043801931e-05) {
															return 0;
														}
														else {
															return 3;
														}
													}
												}
												else {
													if (feature_vector.at(0) <= -0.00013868650057702325) {
														return 3;
													}
													else {
														return 0;
													}
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 474.0675048828125) {
												if (feature_vector.at(7) <= -7.885664939880371) {
													if (feature_vector.at(2) <= 0.007840674836188555) {
														return 1;
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(8) <= 4.892810106277466) {
														return 0;
													}
													else {
														if (feature_vector.at(4) <= 0.5488595068454742) {
															if (feature_vector.at(6) <= -40.0713996887207) {
																return 1;
															}
															else {
																if (feature_vector.at(6) <= -32.32264995574951) {
																	if (feature_vector.at(8) <= 5.36511492729187) {
																		if (feature_vector.at(6) <= -35.35930061340332) {
																			return 3;
																		}
																		else {
																			return 1;
																		}
																	}
																	else {
																		if (feature_vector.at(2) <= 0.006099635036662221) {
																			if (feature_vector.at(6) <= -35.78929901123047) {
																				return 3;
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			return 3;
																		}
																	}
																}
																else {
																	return 1;
																}
															}
														}
														else {
															return 1;
														}
													}
												}
											}
											else {
												if (feature_vector.at(3) <= 2.847985029220581) {
													return 0;
												}
												else {
													if (feature_vector.at(4) <= -0.2410360462963581) {
														if (feature_vector.at(5) <= 619.0794982910156) {
															return 3;
														}
														else {
															return 0;
														}
													}
													else {
														return 1;
													}
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(1) <= 0.6829734891653061) {
										return 3;
									}
									else {
										return 1;
									}
								}
							}
						}
						else {
							if (feature_vector.at(3) <= 26.64419937133789) {
								if (feature_vector.at(4) <= -0.11494800075888634) {
									if (feature_vector.at(8) <= 8.06525468826294) {
										if (feature_vector.at(0) <= -6.896209924889263e-05) {
											return 1;
										}
										else {
											if (feature_vector.at(0) <= -5.9847950979019515e-05) {
												return 0;
											}
											else {
												if (feature_vector.at(3) <= 7.710929870605469) {
													if (feature_vector.at(4) <= -0.25929250568151474) {
														return 0;
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(0) <= -5.2588349717552774e-05) {
														if (feature_vector.at(7) <= -5.409290075302124) {
															return 1;
														}
														else {
															return 0;
														}
													}
													else {
														return 1;
													}
												}
											}
										}
									}
									else {
										if (feature_vector.at(8) <= 8.412320137023926) {
											return 3;
										}
										else {
											return 1;
										}
									}
								}
								else {
									if (feature_vector.at(6) <= -29.976150512695312) {
										if (feature_vector.at(4) <= 1.9458849430084229) {
											if (feature_vector.at(1) <= 0.6380504965782166) {
												if (feature_vector.at(2) <= 0.0006918704893905669) {
													return 1;
												}
												else {
													if (feature_vector.at(7) <= -6.080004930496216) {
														if (feature_vector.at(3) <= 25.159350395202637) {
															if (feature_vector.at(4) <= 0.05485814996063709) {
																if (feature_vector.at(7) <= -10.902210235595703) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
															else {
																return 1;
															}
														}
														else {
															return 0;
														}
													}
													else {
														if (feature_vector.at(6) <= -34.30200004577637) {
															return 0;
														}
														else {
															if (feature_vector.at(8) <= 4.619910001754761) {
																return 0;
															}
															else {
																return 1;
															}
														}
													}
												}
											}
											else {
												if (feature_vector.at(4) <= 0.313911497592926) {
													return 1;
												}
												else {
													if (feature_vector.at(2) <= 0.0059119598008692265) {
														return 1;
													}
													else {
														return 0;
													}
												}
											}
										}
										else {
											if (feature_vector.at(1) <= 0.5244909971952438) {
												return 3;
											}
											else {
												return 0;
											}
										}
									}
									else {
										return 1;
									}
								}
							}
							else {
								if (feature_vector.at(3) <= 29.567500114440918) {
									if (feature_vector.at(3) <= 29.54615020751953) {
										return 1;
									}
									else {
										return 0;
									}
								}
								else {
									return 1;
								}
							}
						}
					}
					else {
						if (feature_vector.at(5) <= 121.44049835205078) {
							if (feature_vector.at(4) <= 0.47517500817775726) {
								if (feature_vector.at(2) <= 0.1356464996933937) {
									if (feature_vector.at(3) <= 1.1801999807357788) {
										return 1;
									}
									else {
										if (feature_vector.at(5) <= 65.55550193786621) {
											return 1;
										}
										else {
											if (feature_vector.at(7) <= -7.352920055389404) {
												if (feature_vector.at(2) <= 0.028587049338966608) {
													return 1;
												}
												else {
													return 3;
												}
											}
											else {
												return 0;
											}
										}
									}
								}
								else {
									return 3;
								}
							}
							else {
								if (feature_vector.at(5) <= 52.52860927581787) {
									return 1;
								}
								else {
									return 3;
								}
							}
						}
						else {
							if (feature_vector.at(4) <= -0.12678249925374985) {
								if (feature_vector.at(3) <= 2.155145049095154) {
									if (feature_vector.at(7) <= -7.901095151901245) {
										if (feature_vector.at(6) <= -35.32659912109375) {
											return 0;
										}
										else {
											if (feature_vector.at(2) <= 0.040475950576364994) {
												return 1;
											}
											else {
												return 3;
											}
										}
									}
									else {
										if (feature_vector.at(6) <= -34.93159866333008) {
											if (feature_vector.at(5) <= 691.1549987792969) {
												if (feature_vector.at(6) <= -35.60900115966797) {
													return 3;
												}
												else {
													if (feature_vector.at(7) <= -3.5603049993515015) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
											else {
												if (feature_vector.at(6) <= -35.59210014343262) {
													return 0;
												}
												else {
													return 3;
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 321.7984924316406) {
												return 3;
											}
											else {
												if (feature_vector.at(1) <= 0.2674049884080887) {
													return 1;
												}
												else {
													if (feature_vector.at(5) <= 365.59400939941406) {
														return 0;
													}
													else {
														if (feature_vector.at(2) <= 0.018888000398874283) {
															return 0;
														}
														else {
															if (feature_vector.at(0) <= -0.0008236395224230364) {
																return 0;
															}
															else {
																return 3;
															}
														}
													}
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(1) <= 0.7332139909267426) {
										if (feature_vector.at(7) <= -6.358659982681274) {
											if (feature_vector.at(8) <= 7.230225086212158) {
												if (feature_vector.at(0) <= 5.735389038363792e-05) {
													return 1;
												}
												else {
													return 3;
												}
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(0) <= 5.130160025146324e-05) {
												return 0;
											}
											else {
												if (feature_vector.at(8) <= 5.59625506401062) {
													return 1;
												}
												else {
													if (feature_vector.at(8) <= 6.473055124282837) {
														return 0;
													}
													else {
														return 3;
													}
												}
											}
										}
									}
									else {
										if (feature_vector.at(8) <= 6.83342981338501) {
											if (feature_vector.at(8) <= 4.458585023880005) {
												if (feature_vector.at(2) <= 0.01112564979121089) {
													return 1;
												}
												else {
													if (feature_vector.at(5) <= 619.1065063476562) {
														return 0;
													}
													else {
														if (feature_vector.at(5) <= 709.4169921875) {
															return 3;
														}
														else {
															return 0;
														}
													}
												}
											}
											else {
												if (feature_vector.at(1) <= 0.8221389949321747) {
													if (feature_vector.at(6) <= -34.77840042114258) {
														return 3;
													}
													else {
														if (feature_vector.at(6) <= -34.5536003112793) {
															return 0;
														}
														else {
															return 1;
														}
													}
												}
												else {
													if (feature_vector.at(7) <= -2.0793650150299072) {
														return 1;
													}
													else {
														return 3;
													}
												}
											}
										}
										else {
											if (feature_vector.at(0) <= -5.197507562115788e-07) {
												if (feature_vector.at(0) <= -0.0001629173057153821) {
													if (feature_vector.at(1) <= 0.871059000492096) {
														return 3;
													}
													else {
														return 0;
													}
												}
												else {
													return 1;
												}
											}
											else {
												return 3;
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(1) <= 0.9244209825992584) {
									if (feature_vector.at(3) <= 0.5553329885005951) {
										if (feature_vector.at(5) <= 202.22750091552734) {
											if (feature_vector.at(5) <= 197.3165054321289) {
												if (feature_vector.at(4) <= 0.07118494808673859) {
													if (feature_vector.at(5) <= 133.84900283813477) {
														return 3;
													}
													else {
														return 1;
													}
												}
												else {
													return 3;
												}
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(7) <= -8.494935035705566) {
												if (feature_vector.at(6) <= -39.231149673461914) {
													return 0;
												}
												else {
													if (feature_vector.at(4) <= 0.051553601399064064) {
														if (feature_vector.at(3) <= 0.39570049941539764) {
															return 3;
														}
														else {
															return 1;
														}
													}
													else {
														return 1;
													}
												}
											}
											else {
												if (feature_vector.at(0) <= -0.001642960007302463) {
													if (feature_vector.at(2) <= 0.021734950598329306) {
														return 3;
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(5) <= 693.9110107421875) {
														if (feature_vector.at(1) <= 0.32667650282382965) {
															if (feature_vector.at(7) <= -4.003419995307922) {
																if (feature_vector.at(5) <= 617.5260009765625) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
															else {
																return 1;
															}
														}
														else {
															if (feature_vector.at(0) <= 0.012230045162141323) {
																if (feature_vector.at(6) <= -40.29585075378418) {
																	return 0;
																}
																else {
																	if (feature_vector.at(3) <= 0.4843679964542389) {
																		if (feature_vector.at(5) <= 593.4739990234375) {
																			if (feature_vector.at(6) <= -24.984800338745117) {
																				if (feature_vector.at(4) <= -0.11495349928736687) {
																					if (feature_vector.at(4) <= -0.11661950126290321) {
																						return 3;
																					}
																					else {
																						return 0;
																					}
																				}
																				else {
																					if (feature_vector.at(3) <= 0.41978199779987335) {
																						if (feature_vector.at(6) <= -32.73150062561035) {
																							if (feature_vector.at(6) <= -32.7547492980957) {
																								if (feature_vector.at(6) <= -34.39280128479004) {
																									return 3;
																								}
																								else {
																									if (feature_vector.at(6) <= -34.346200942993164) {
																										return 1;
																									}
																									else {
																										if (feature_vector.at(2) <= 0.013307150453329086) {
																											if (feature_vector.at(2) <= 0.01308075012639165) {
																												return 3;
																											}
																											else {
																												return 1;
																											}
																										}
																										else {
																											return 3;
																										}
																									}
																								}
																							}
																							else {
																								return 0;
																							}
																						}
																						else {
																							return 3;
																						}
																					}
																					else {
																						if (feature_vector.at(3) <= 0.42287150025367737) {
																							return 0;
																						}
																						else {
																							if (feature_vector.at(8) <= 3.7954599857330322) {
																								if (feature_vector.at(5) <= 505.0094909667969) {
																									return 0;
																								}
																								else {
																									return 3;
																								}
																							}
																							else {
																								return 3;
																							}
																						}
																					}
																				}
																			}
																			else {
																				if (feature_vector.at(3) <= -0.06665034964680672) {
																					return 3;
																				}
																				else {
																					return 1;
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(5) <= 595.6134948730469) {
																				return 1;
																			}
																			else {
																				if (feature_vector.at(8) <= 3.3388500213623047) {
																					return 1;
																				}
																				else {
																					if (feature_vector.at(0) <= -0.001009400497423485) {
																						return 0;
																					}
																					else {
																						if (feature_vector.at(8) <= 8.324854850769043) {
																							if (feature_vector.at(6) <= -38.833200454711914) {
																								if (feature_vector.at(4) <= 0.2806439995765686) {
																									return 3;
																								}
																								else {
																									return 0;
																								}
																							}
																							else {
																								return 3;
																							}
																						}
																						else {
																							return 0;
																						}
																					}
																				}
																			}
																		}
																	}
																	else {
																		if (feature_vector.at(6) <= -32.081199645996094) {
																			if (feature_vector.at(1) <= 0.8124719858169556) {
																				return 0;
																			}
																			else {
																				if (feature_vector.at(0) <= -0.0002378249992034398) {
																					return 1;
																				}
																				else {
																					return 3;
																				}
																			}
																		}
																		else {
																			return 3;
																		}
																	}
																}
															}
															else {
																return 1;
															}
														}
													}
													else {
														if (feature_vector.at(0) <= 0.0002316545960638905) {
															return 1;
														}
														else {
															return 3;
														}
													}
												}
											}
										}
									}
									else {
										if (feature_vector.at(0) <= 0.0002596334961708635) {
											if (feature_vector.at(5) <= 384.4145050048828) {
												if (feature_vector.at(3) <= 6.464025020599365) {
													if (feature_vector.at(7) <= -2.6821950674057007) {
														if (feature_vector.at(3) <= 4.647644996643066) {
															if (feature_vector.at(1) <= 0.4528319984674454) {
																if (feature_vector.at(6) <= -34.198598861694336) {
																	if (feature_vector.at(8) <= 5.363945007324219) {
																		return 3;
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	return 0;
																}
															}
															else {
																if (feature_vector.at(7) <= -9.20835018157959) {
																	if (feature_vector.at(8) <= 5.393719911575317) {
																		return 3;
																	}
																	else {
																		if (feature_vector.at(3) <= 0.9066694974899292) {
																			return 1;
																		}
																		else {
																			if (feature_vector.at(8) <= 6.442569971084595) {
																				return 0;
																			}
																			else {
																				return 1;
																			}
																		}
																	}
																}
																else {
																	if (feature_vector.at(8) <= 3.3038549423217773) {
																		return 1;
																	}
																	else {
																		if (feature_vector.at(3) <= 3.6032400131225586) {
																			return 3;
																		}
																		else {
																			if (feature_vector.at(4) <= -0.0610873494297266) {
																				return 1;
																			}
																			else {
																				return 3;
																			}
																		}
																	}
																}
															}
														}
														else {
															if (feature_vector.at(6) <= -35.33365058898926) {
																return 3;
															}
															else {
																return 0;
															}
														}
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(5) <= 352.0435028076172) {
														if (feature_vector.at(0) <= -0.00011944300422328524) {
															if (feature_vector.at(7) <= -4.231865048408508) {
																return 3;
															}
															else {
																return 1;
															}
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(3) <= 9.356640338897705) {
															return 0;
														}
														else {
															return 3;
														}
													}
												}
											}
											else {
												if (feature_vector.at(4) <= 0.11751699820160866) {
													if (feature_vector.at(4) <= -0.005438450025394559) {
														if (feature_vector.at(5) <= 613.5509948730469) {
															if (feature_vector.at(0) <= -0.0009918544965330511) {
																return 0;
															}
															else {
																if (feature_vector.at(2) <= 0.028995499946177006) {
																	if (feature_vector.at(1) <= 0.3676465004682541) {
																		return 0;
																	}
																	else {
																		return 3;
																	}
																}
																else {
																	return 1;
																}
															}
														}
														else {
															if (feature_vector.at(0) <= 3.5166456200386165e-05) {
																return 1;
															}
															else {
																return 0;
															}
														}
													}
													else {
														if (feature_vector.at(0) <= -0.0004534914914984256) {
															return 0;
														}
														else {
															if (feature_vector.at(3) <= 2.458104968070984) {
																if (feature_vector.at(6) <= -33.19014930725098) {
																	if (feature_vector.at(2) <= 0.07362090051174164) {
																		if (feature_vector.at(3) <= 1.9748299717903137) {
																			if (feature_vector.at(6) <= -33.81354904174805) {
																				return 0;
																			}
																			else {
																				return 3;
																			}
																		}
																		else {
																			return 3;
																		}
																	}
																	else {
																		return 1;
																	}
																}
																else {
																	return 1;
																}
															}
															else {
																return 1;
															}
														}
													}
												}
												else {
													if (feature_vector.at(5) <= 581.89599609375) {
														if (feature_vector.at(7) <= -3.5209449529647827) {
															return 0;
														}
														else {
															if (feature_vector.at(0) <= -8.270631383311411e-05) {
																if (feature_vector.at(4) <= 0.8669494986534119) {
																	return 0;
																}
																else {
																	return 3;
																}
															}
															else {
																return 1;
															}
														}
													}
													else {
														if (feature_vector.at(4) <= 0.9047009944915771) {
															if (feature_vector.at(6) <= -35.589799880981445) {
																if (feature_vector.at(1) <= 0.6726750135421753) {
																	return 0;
																}
																else {
																	return 3;
																}
															}
															else {
																return 0;
															}
														}
														else {
															if (feature_vector.at(3) <= 3.008245050907135) {
																return 1;
															}
															else {
																return 3;
															}
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(7) <= -1.1305100321769714) {
												if (feature_vector.at(8) <= 3.6131399869918823) {
													if (feature_vector.at(6) <= -33.019700050354004) {
														return 0;
													}
													else {
														return 3;
													}
												}
												else {
													if (feature_vector.at(3) <= 5.194454908370972) {
														return 3;
													}
													else {
														if (feature_vector.at(5) <= 307.9130096435547) {
															return 1;
														}
														else {
															return 3;
														}
													}
												}
											}
											else {
												return 1;
											}
										}
									}
								}
								else {
									if (feature_vector.at(3) <= 14.73270034790039) {
										if (feature_vector.at(4) <= -0.040517399087548256) {
											if (feature_vector.at(5) <= 413.9304962158203) {
												if (feature_vector.at(8) <= 6.0074450969696045) {
													if (feature_vector.at(3) <= 9.555769920349121) {
														return 3;
													}
													else {
														return 0;
													}
												}
												else {
													return 1;
												}
											}
											else {
												if (feature_vector.at(2) <= 0.05766479857265949) {
													if (feature_vector.at(4) <= -0.09683455154299736) {
														return 3;
													}
													else {
														return 1;
													}
												}
												else {
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(7) <= -15.562249660491943) {
												return 0;
											}
											else {
												if (feature_vector.at(4) <= 0.198914997279644) {
													if (feature_vector.at(3) <= 2.559464931488037) {
														if (feature_vector.at(3) <= 0.12296799942851067) {
															if (feature_vector.at(2) <= 0.10740749910473824) {
																if (feature_vector.at(1) <= 0.9960325062274933) {
																	return 3;
																}
																else {
																	if (feature_vector.at(6) <= -21.78884983062744) {
																		return 1;
																	}
																	else {
																		return 3;
																	}
																}
															}
															else {
																if (feature_vector.at(7) <= -1.4027889966964722) {
																	if (feature_vector.at(5) <= 552.4240112304688) {
																		return 3;
																	}
																	else {
																		if (feature_vector.at(4) <= 0.002393194939941168) {
																			return 0;
																		}
																		else {
																			return 3;
																		}
																	}
																}
																else {
																	if (feature_vector.at(8) <= 5.166130065917969) {
																		return 3;
																	}
																	else {
																		return 0;
																	}
																}
															}
														}
														else {
															if (feature_vector.at(0) <= -0.0008684729982633144) {
																if (feature_vector.at(5) <= 430.3994903564453) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
															else {
																if (feature_vector.at(3) <= 0.15064949542284012) {
																	return 0;
																}
																else {
																	if (feature_vector.at(8) <= 3.4449349641799927) {
																		return 1;
																	}
																	else {
																		return 3;
																	}
																}
															}
														}
													}
													else {
														if (feature_vector.at(2) <= 0.05004650168120861) {
															return 1;
														}
														else {
															return 0;
														}
													}
												}
												else {
													if (feature_vector.at(3) <= 11.490349769592285) {
														if (feature_vector.at(0) <= -0.0006452160014305264) {
															if (feature_vector.at(3) <= 4.378809928894043) {
																if (feature_vector.at(3) <= 1.7249450087547302) {
																	return 3;
																}
																else {
																	if (feature_vector.at(4) <= 0.47110800445079803) {
																		if (feature_vector.at(4) <= 0.24925850331783295) {
																			return 3;
																		}
																		else {
																			return 0;
																		}
																	}
																	else {
																		return 3;
																	}
																}
															}
															else {
																if (feature_vector.at(1) <= 0.9978789985179901) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
														}
														else {
															if (feature_vector.at(6) <= -39.113149642944336) {
																if (feature_vector.at(6) <= -39.16710090637207) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
															else {
																return 3;
															}
														}
													}
													else {
														if (feature_vector.at(4) <= 1.256534993648529) {
															return 0;
														}
														else {
															return 3;
														}
													}
												}
											}
										}
									}
									else {
										if (feature_vector.at(8) <= 6.29079008102417) {
											return 1;
										}
										else {
											if (feature_vector.at(1) <= 0.9828790128231049) {
												return 3;
											}
											else {
												return 0;
											}
										}
									}
								}
							}
						}
					}
				}
				else {
					if (feature_vector.at(3) <= 7.939895153045654) {
						if (feature_vector.at(0) <= -0.0003817289980361238) {
							if (feature_vector.at(2) <= 0.1708965003490448) {
								if (feature_vector.at(8) <= 3.629149913787842) {
									return 1;
								}
								else {
									if (feature_vector.at(7) <= -7.9185402393341064) {
										if (feature_vector.at(7) <= -9.559514999389648) {
											if (feature_vector.at(4) <= -0.05605170037597418) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(4) <= 0.010541294934228063) {
												return 3;
											}
											else {
												if (feature_vector.at(3) <= 4.1383548974990845) {
													return 0;
												}
												else {
													return 3;
												}
											}
										}
									}
									else {
										if (feature_vector.at(2) <= 0.003942060051485896) {
											if (feature_vector.at(6) <= -33.714799880981445) {
												return 0;
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(5) <= 754.54150390625) {
												if (feature_vector.at(4) <= 0.2806032346561551) {
													return 0;
												}
												else {
													return 3;
												}
											}
											else {
												if (feature_vector.at(7) <= -7.505959987640381) {
													if (feature_vector.at(0) <= -0.0009932939719874412) {
														return 1;
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(1) <= 0.9241105020046234) {
														return 0;
													}
													else {
														if (feature_vector.at(1) <= 0.9260334968566895) {
															return 1;
														}
														else {
															if (feature_vector.at(3) <= 4.878795146942139) {
																return 0;
															}
															else {
																if (feature_vector.at(3) <= 6.555700063705444) {
																	return 1;
																}
																else {
																	return 0;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(5) <= 1309.5704956054688) {
									return 3;
								}
								else {
									return 0;
								}
							}
						}
						else {
							if (feature_vector.at(3) <= 0.4046574980020523) {
								if (feature_vector.at(5) <= 2036.094970703125) {
									if (feature_vector.at(4) <= 0.48816950619220734) {
										if (feature_vector.at(2) <= 0.05534075014293194) {
											if (feature_vector.at(6) <= -37.096750259399414) {
												if (feature_vector.at(2) <= 0.00589634501375258) {
													return 3;
												}
												else {
													if (feature_vector.at(8) <= 5.868215084075928) {
														return 0;
													}
													else {
														if (feature_vector.at(7) <= -5.720224857330322) {
															return 3;
														}
														else {
															if (feature_vector.at(3) <= 0.13793430104851723) {
																return 1;
															}
															else {
																return 0;
															}
														}
													}
												}
											}
											else {
												if (feature_vector.at(1) <= 0.9103739857673645) {
													if (feature_vector.at(0) <= -0.00012411400166456588) {
														return 3;
													}
													else {
														if (feature_vector.at(5) <= 776.3940124511719) {
															return 3;
														}
														else {
															if (feature_vector.at(5) <= 1883.8550415039062) {
																if (feature_vector.at(4) <= 0.0009407250909134746) {
																	if (feature_vector.at(3) <= 0.10649500042200089) {
																		if (feature_vector.at(5) <= 850.9609985351562) {
																			if (feature_vector.at(8) <= 5.374419927597046) {
																				return 0;
																			}
																			else {
																				return 1;
																			}
																		}
																		else {
																			return 1;
																		}
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	if (feature_vector.at(5) <= 892.7669982910156) {
																		if (feature_vector.at(1) <= 0.5764324963092804) {
																			return 0;
																		}
																		else {
																			return 1;
																		}
																	}
																	else {
																		return 1;
																	}
																}
															}
															else {
																return 0;
															}
														}
													}
												}
												else {
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(0) <= 0.0008234285051003098) {
												if (feature_vector.at(7) <= -3.3283849954605103) {
													if (feature_vector.at(1) <= 0.7990415096282959) {
														if (feature_vector.at(1) <= 0.7811820209026337) {
															return 0;
														}
														else {
															return 1;
														}
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(4) <= -0.03606935031712055) {
														return 1;
													}
													else {
														if (feature_vector.at(5) <= 1220.405029296875) {
															return 1;
														}
														else {
															return 0;
														}
													}
												}
											}
											else {
												return 1;
											}
										}
									}
									else {
										return 3;
									}
								}
								else {
									if (feature_vector.at(7) <= -6.333015203475952) {
										if (feature_vector.at(5) <= 3424.550048828125) {
											if (feature_vector.at(0) <= 0.0004083834937773645) {
												return 3;
											}
											else {
												if (feature_vector.at(2) <= 0.1461305022239685) {
													return 3;
												}
												else {
													return 0;
												}
											}
										}
										else {
											if (feature_vector.at(6) <= -35.0004997253418) {
												return 0;
											}
											else {
												return 1;
											}
										}
									}
									else {
										if (feature_vector.at(8) <= 5.027965068817139) {
											if (feature_vector.at(1) <= 0.5442345142364502) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											if (feature_vector.at(7) <= -2.732450008392334) {
												if (feature_vector.at(4) <= -0.1346458476036787) {
													return 0;
												}
												else {
													if (feature_vector.at(7) <= -6.015359878540039) {
														if (feature_vector.at(5) <= 2317.8099365234375) {
															return 3;
														}
														else {
															return 0;
														}
													}
													else {
														return 3;
													}
												}
											}
											else {
												return 1;
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(4) <= 0.1193769983947277) {
									if (feature_vector.at(4) <= -0.07270770147442818) {
										if (feature_vector.at(2) <= 0.0055028649512678385) {
											if (feature_vector.at(7) <= -5.688374996185303) {
												if (feature_vector.at(5) <= 1019.64501953125) {
													return 0;
												}
												else {
													if (feature_vector.at(3) <= 2.753374934196472) {
														if (feature_vector.at(3) <= 1.1387384831905365) {
															return 3;
														}
														else {
															return 0;
														}
													}
													else {
														return 1;
													}
												}
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(7) <= -2.5720349550247192) {
												if (feature_vector.at(8) <= 8.031229734420776) {
													if (feature_vector.at(6) <= -33.216400146484375) {
														if (feature_vector.at(1) <= 0.3743384927511215) {
															if (feature_vector.at(5) <= 1066.3760070800781) {
																return 0;
															}
															else {
																return 1;
															}
														}
														else {
															if (feature_vector.at(4) <= -0.3721330016851425) {
																if (feature_vector.at(3) <= 1.7858949899673462) {
																	return 3;
																}
																else {
																	return 0;
																}
															}
															else {
																if (feature_vector.at(6) <= -35.037200927734375) {
																	return 0;
																}
																else {
																	if (feature_vector.at(6) <= -34.69194984436035) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
															}
														}
													}
													else {
														if (feature_vector.at(5) <= 1423.25) {
															if (feature_vector.at(2) <= 0.07756019942462444) {
																return 1;
															}
															else {
																return 0;
															}
														}
														else {
															return 0;
														}
													}
												}
												else {
													return 3;
												}
											}
											else {
												if (feature_vector.at(8) <= 5.366849899291992) {
													return 0;
												}
												else {
													return 1;
												}
											}
										}
									}
									else {
										if (feature_vector.at(5) <= 2336.2249755859375) {
											if (feature_vector.at(5) <= 1209.0900268554688) {
												if (feature_vector.at(3) <= 1.0951350331306458) {
													if (feature_vector.at(2) <= 0.005719424923881888) {
														if (feature_vector.at(7) <= -6.4011900424957275) {
															return 3;
														}
														else {
															return 0;
														}
													}
													else {
														return 1;
													}
												}
												else {
													if (feature_vector.at(3) <= 5.291330099105835) {
														if (feature_vector.at(6) <= -29.044050216674805) {
															if (feature_vector.at(8) <= 4.384049892425537) {
																if (feature_vector.at(2) <= 0.013818149920552969) {
																	return 1;
																}
																else {
																	if (feature_vector.at(7) <= -14.860499858856201) {
																		return 1;
																	}
																	else {
																		return 0;
																	}
																}
															}
															else {
																if (feature_vector.at(4) <= -0.054822251200675964) {
																	return 3;
																}
																else {
																	if (feature_vector.at(6) <= -32.25584888458252) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(1) <= 0.35093749314546585) {
																			return 1;
																		}
																		else {
																			return 0;
																		}
																	}
																}
															}
														}
														else {
															return 1;
														}
													}
													else {
														return 1;
													}
												}
											}
											else {
												if (feature_vector.at(5) <= 1293.9199829101562) {
													return 1;
												}
												else {
													if (feature_vector.at(7) <= -9.46003007888794) {
														if (feature_vector.at(3) <= 0.8942144811153412) {
															return 1;
														}
														else {
															return 3;
														}
													}
													else {
														if (feature_vector.at(7) <= -7.608069896697998) {
															return 1;
														}
														else {
															if (feature_vector.at(4) <= -0.0012753484770655632) {
																if (feature_vector.at(8) <= 5.825479984283447) {
																	if (feature_vector.at(0) <= 0.00016913950094021857) {
																		if (feature_vector.at(7) <= -4.514775037765503) {
																			if (feature_vector.at(3) <= 3.9141799211502075) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																		else {
																			if (feature_vector.at(5) <= 1443.89501953125) {
																				return 1;
																			}
																			else {
																				return 0;
																			}
																		}
																	}
																	else {
																		return 0;
																	}
																}
																else {
																	return 0;
																}
															}
															else {
																if (feature_vector.at(6) <= -34.72209930419922) {
																	if (feature_vector.at(6) <= -36.9193000793457) {
																		return 1;
																	}
																	else {
																		if (feature_vector.at(8) <= 7.061535120010376) {
																			if (feature_vector.at(7) <= -6.62322998046875) {
																				return 1;
																			}
																			else {
																				if (feature_vector.at(3) <= 0.760965496301651) {
																					return 1;
																				}
																				else {
																					return 0;
																				}
																			}
																		}
																		else {
																			if (feature_vector.at(3) <= 4.410390138626099) {
																				return 3;
																			}
																			else {
																				return 1;
																			}
																		}
																	}
																}
																else {
																	if (feature_vector.at(0) <= -0.0001438035033061169) {
																		return 0;
																	}
																	else {
																		if (feature_vector.at(7) <= -6.185014963150024) {
																			return 0;
																		}
																		else {
																			return 1;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(2) <= 0.009153825230896473) {
												if (feature_vector.at(3) <= 3.7642250061035156) {
													if (feature_vector.at(3) <= 0.9774499982595444) {
														if (feature_vector.at(7) <= -10.10856008529663) {
															return 1;
														}
														else {
															return 3;
														}
													}
													else {
														return 0;
													}
												}
												else {
													return 1;
												}
											}
											else {
												if (feature_vector.at(7) <= -4.669514894485474) {
													if (feature_vector.at(1) <= 0.9889830052852631) {
														if (feature_vector.at(0) <= 0.00045376401249086484) {
															return 3;
														}
														else {
															return 0;
														}
													}
													else {
														return 0;
													}
												}
												else {
													return 0;
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(4) <= 0.7174810171127319) {
										if (feature_vector.at(6) <= -30.431900024414062) {
											if (feature_vector.at(7) <= -9.84577465057373) {
												if (feature_vector.at(8) <= 6.327200174331665) {
													return 0;
												}
												else {
													return 3;
												}
											}
											else {
												if (feature_vector.at(8) <= 3.7546550035476685) {
													if (feature_vector.at(6) <= -34.981950759887695) {
														if (feature_vector.at(0) <= -0.000176625995663926) {
															return 0;
														}
														else {
															return 1;
														}
													}
													else {
														return 0;
													}
												}
												else {
													if (feature_vector.at(3) <= 0.8524250090122223) {
														if (feature_vector.at(3) <= 0.7765875160694122) {
															return 0;
														}
														else {
															return 1;
														}
													}
													else {
														if (feature_vector.at(6) <= -37.88029861450195) {
															if (feature_vector.at(2) <= 0.018667999655008316) {
																return 1;
															}
															else {
																return 0;
															}
														}
														else {
															return 0;
														}
													}
												}
											}
										}
										else {
											if (feature_vector.at(5) <= 1689.530029296875) {
												return 1;
											}
											else {
												if (feature_vector.at(2) <= 0.007640309981070459) {
													return 0;
												}
												else {
													return 3;
												}
											}
										}
									}
									else {
										if (feature_vector.at(1) <= 0.9361580014228821) {
											if (feature_vector.at(0) <= 0.0005638354923576117) {
												if (feature_vector.at(5) <= 801.3379821777344) {
													return 1;
												}
												else {
													return 0;
												}
											}
											else {
												return 3;
											}
										}
										else {
											if (feature_vector.at(6) <= -40.21649932861328) {
												return 0;
											}
											else {
												return 3;
											}
										}
									}
								}
							}
						}
					}
					else {
						if (feature_vector.at(3) <= 13.16130018234253) {
							if (feature_vector.at(0) <= -3.980884866905399e-05) {
								if (feature_vector.at(1) <= 0.22882100194692612) {
									return 1;
								}
								else {
									if (feature_vector.at(6) <= -36.980899810791016) {
										return 0;
									}
									else {
										if (feature_vector.at(7) <= -5.733715057373047) {
											if (feature_vector.at(8) <= 4.155259966850281) {
												return 3;
											}
											else {
												return 1;
											}
										}
										else {
											if (feature_vector.at(6) <= -36.05755043029785) {
												if (feature_vector.at(3) <= 11.697999954223633) {
													return 1;
												}
												else {
													return 3;
												}
											}
											else {
												if (feature_vector.at(8) <= 3.6291000843048096) {
													return 1;
												}
												else {
													return 0;
												}
											}
										}
									}
								}
							}
							else {
								if (feature_vector.at(4) <= 0.5644160211086273) {
									if (feature_vector.at(5) <= 1000.261474609375) {
										if (feature_vector.at(3) <= 11.010299682617188) {
											return 1;
										}
										else {
											return 0;
										}
									}
									else {
										if (feature_vector.at(2) <= 0.03508844971656799) {
											if (feature_vector.at(6) <= -33.60115051269531) {
												return 1;
											}
											else {
												if (feature_vector.at(2) <= 0.011744549963623285) {
													return 1;
												}
												else {
													return 0;
												}
											}
										}
										else {
											return 0;
										}
									}
								}
								else {
									if (feature_vector.at(4) <= 1.4539250135421753) {
										return 0;
									}
									else {
										return 3;
									}
								}
							}
						}
						else {
							if (feature_vector.at(7) <= -12.33144998550415) {
								return 2;
							}
							else {
								if (feature_vector.at(3) <= 26.81215000152588) {
									if (feature_vector.at(0) <= -7.475775055354461e-05) {
										return 1;
									}
									else {
										if (feature_vector.at(5) <= 965.7074890136719) {
											return 0;
										}
										else {
											if (feature_vector.at(4) <= 0.07127454876899719) {
												return 1;
											}
											else {
												if (feature_vector.at(2) <= 0.003089679987169802) {
													return 1;
												}
												else {
													if (feature_vector.at(1) <= 0.8665930032730103) {
														return 0;
													}
													else {
														if (feature_vector.at(3) <= 21.385000228881836) {
															return 1;
														}
														else {
															if (feature_vector.at(2) <= 0.011044325307011604) {
																return 3;
															}
															else {
																return 0;
															}
														}
													}
												}
											}
										}
									}
								}
								else {
									if (feature_vector.at(8) <= 8.225430011749268) {
										if (feature_vector.at(5) <= 1195.010009765625) {
											if (feature_vector.at(5) <= 1181.2750244140625) {
												return 1;
											}
											else {
												return 0;
											}
										}
										else {
											return 1;
										}
									}
									else {
										return 0;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}